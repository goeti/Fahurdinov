#include <iostream>
#include <string>
#include <Windows.h>
#include "rectangle.h"

using namespace std;

int main() {
	float p[4] = { 2, 1, 1, 4 };
	rectangle rec1(p);
	string ad = "D:\\Fahurdinov\\20.intersectrectan\\point.txt";
	rectangle rec2(ad);
	cout << rec1.intersect(rec2);
	return 0;
}