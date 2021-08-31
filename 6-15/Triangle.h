#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INLCUDED
#include <iostream>
#include "Figure.h"
using namespace std;

class Triangle : public Figure {
	// »ï°¢ÇüÀÇ ¼¼ ²ÀÁþÁ¡ ÁÂÇ¥(x1, y1), (x2,y2), (x3,y3)
	double x1, y1, x2, y2, x3, y3;
public:
	Triangle(const double v[3][2]);

	void move(double dx, double dy);
	void scale(double s);
	void draw() const;
};

#endif // TRIANGLE_H_INCLUDED