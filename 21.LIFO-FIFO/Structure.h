#pragma once

class Structure {
public:
	virtual void push(int a) = 0;
	virtual int pop() = 0;
	virtual void print() = 0;
};