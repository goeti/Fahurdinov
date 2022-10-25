#pragma once


class Neuron {
public:
	Neuron();
	Neuron(double w[], int n);
	Neuron(double w[], int n, int flag);
	~Neuron();
	double calc(double e[]);
private:
	double* weight;
	int f;
	int n;
	void actfun(double& res);
};
