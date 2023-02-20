#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <corecrt_math_defines.h>
#include <iostream>
class Circle
{
private:
	int radius;

public:
	Circle(int r)
	{
		radius = r;
	}
	int areaCircle()
	{
		return M_PI * radius * radius;
	}
	void changeRadius(int r)
	{
		radius = r;
	}
};

