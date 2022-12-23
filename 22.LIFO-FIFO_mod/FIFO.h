#pragma once
#include "Structure.h"
#include <vector>

template<class T>
class FIFO : public Structure<T> {
public:
	FIFO();
	FIFO(std::vector<T> w);
	void push(T a);
	T pop();
	void print();
private:
	std::vector<T> w;
};