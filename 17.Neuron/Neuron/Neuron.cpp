#include "Neuron.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <math.h>

Neuron::Neuron() : weight(0), f(0) {}

Neuron::Neuron(double w[], int n) : Neuron(w, n, 0) {}

Neuron::Neuron(double w[], int n, int flag) : n(n), f(flag) {
	weight = new double[n];
	for (int i = 0; i < n; i++) weight[i] = w[i];
}

Neuron::~Neuron() = default;

double Neuron::calc(double e[]) {
	double res = weight[0];
	for (int i = 0; i < n - 1; i++) {
		res += weight[i + 1] * e[i];
	}
	if (f) actfun(res);
	return res;
}

void Neuron::actfun(double& res) {
	res = 1 / (1 + exp(-res));
}