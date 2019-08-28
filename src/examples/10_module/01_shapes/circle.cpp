#include "circle.h"

void Circle::draw() 
{
	device_context->DrawCircle(wxPoint(point.x, point.y), radius);
}

