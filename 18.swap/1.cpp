#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;

/*void swap(int* r, int* t) {
	int w;
	w = *r;
	*r = *t;
	*t = w;
}*/
//круто
void swap1(int& r, int& t) {
	int w;
	w = r;
	r = t;
	t = w;
}

void swap2(int& r, int& t) {
	r += t;
	t = r - t;
	r = r - t;
}

void swap3(int& r, int& t) {
	if (r == 0) {
		r = t;
		t = 0;
	}
	if (t == 0) {
		t = r;
		r = 0;
	}
	if (t != 0 && r != 0) {
		r *= t;
		t = r / t;
		r = r / t;
	}
}

void swap4(int& r, int& t) {
	r ^= t;
	t ^= r;
	r ^= t;
}

void swap5(int& r, int& t) {
	struct sw {
		int r;
		int t;
	};

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int r;
	int t;
	cin >> r;
	cin >> t;
	swap4(r, t);
	cout << r<<endl;
	cout << t<<endl;
	return 0;
}