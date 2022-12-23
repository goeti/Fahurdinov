#pragma once
#include "Structure.h"
#include <vector>

class LIFO : public Structure {
public:
	LIFO();
	LIFO(std::vector<int> w);
	void push(int a);
	int pop();
	void print();
private:
	std::vector<int> w;
};