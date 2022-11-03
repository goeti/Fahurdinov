#include "rectangle.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

rectangle::rectangle(float p[]): x1(p[0]), y1(p[1]), x2(p[2]), y2(p[3]) {}

rectangle::rectangle(string ad): adress(ad) {
	get_point();
}

void rectangle::get_point() {
	fstream F;
	F.open(adress);
	if (F) {
		while (!F.eof()) {
			F >> x1;
			F >> y1;
			F >> x2;
			F >> y2;
		}
		F.close();
	}
}
int rectangle::intersect(rectangle a) {
	if (x1 > x2) swap(x1, x2);
	if (y1 > y2) swap(y1, y2);
	if ((x1 <= a.x1 && a.x1 <= x2) || (x1 <= a.x2 && a.x2 <= x2)) {
		if ((y1 <= a.y1 && a.y1 <= y2) || (y1 <= a.y2 && a.y2 <= y2)) return 1;
	}
	return 0;
}