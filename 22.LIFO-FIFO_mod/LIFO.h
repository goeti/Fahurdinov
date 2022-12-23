#pragma once
#include "Structure.h"
#include <vector>

template<class T>
class LIFO : public Structure<T> {
public:
	LIFO();
	LIFO(std::vector<T> w);
	void push(T a);
	T pop();
	void print();
private:
	std::vector<T> w;
};