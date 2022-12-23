#include "FIFO.h"
#include "LIFO.h"
#include <iostream>
#include <vector>

using namespace std;

void add_el(Structure& a, int n) {
	for (int i = 0; i < n; i++) {
		a.push(i);
		a.print();
	}
	for (int i = 0; i < n; i++) {
		cout << a.pop() << endl;
		a.print();
	}
}



int main() {
	int n = 4;
	LIFO a;
	FIFO b;
	add_el(a, n);
	add_el(b, n);
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	/*a.push(3);
	b.push(3);
	a.print();
	b.print();
	a.push(4);
	b.push(4);
	a.print();
	b.print();
	cout << a.pop() << endl;
	cout << b.pop() << endl;
	a.print();
	b.print();
	cout << a.pop() << endl;
	cout << b.pop() << endl;*/
}