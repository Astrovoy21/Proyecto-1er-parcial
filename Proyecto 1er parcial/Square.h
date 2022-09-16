#pragma once
#include "Shape.h"
class Square : public Shape{
protected:
	int sq;
	int res;
public:
	Square(int size, int Option);
	void draw();
};

