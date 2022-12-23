#pragma once

template<class T>
class Structure {
public:
	virtual void push(T a) = 0;
	virtual T pop() = 0;
	virtual void print() = 0;
};