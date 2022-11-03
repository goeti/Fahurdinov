#pragma once
#include <string>


class rectangle {
public:
	rectangle(float p[]);
	rectangle(std::string ad);
	int intersect(rectangle a);
private:
	float x1, y1, x2, y2;
	std::string adress;
	void get_point();
};