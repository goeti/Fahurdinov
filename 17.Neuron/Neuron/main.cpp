#include "Neuron.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;

int main() {
	double w[3] = { 1.0, 2.0, 3.0 };
	double p[2] = { 10.0, 20.0 };
	int n = sizeof w / sizeof w[0];
	Neuron r(w, n, 0);
	Neuron m(w, n);
	cout << m.calc(p) << endl;
	cout << r.calc(p) << endl;
	return 0;
}