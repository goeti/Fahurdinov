#pragma once
#include "Structure.h"
#include <vector>

class FIFO : public Structure {
public:
	FIFO();
	FIFO(std::vector<int> w);
	void push(int a);
	int pop();
	void print();
private:
	std::vector<int> w;
};