#pragma once
#include "Shape.h"
class Triangle: public Shape{
protected:
	int tr;
	int res;
public:
	Triangle(int size, int option);
	void draw();
};

