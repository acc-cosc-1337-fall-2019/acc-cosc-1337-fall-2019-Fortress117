//shape.h
#ifndef SHAPE_H
#define SHAPE_H



#include <iostream>
using std::cout;

// class Hierarchy of Shapes
// shape is top, then line and circle.

class Shape
{
public:
	virtual void draw() {}

};

#endif // !SHAPE_H