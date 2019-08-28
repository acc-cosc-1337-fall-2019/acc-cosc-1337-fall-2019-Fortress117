#include "rectangle.h"

void acc::Rectangle::draw()
{
	device_context->DrawRectangle(point.x, point.y, width, height);
}
