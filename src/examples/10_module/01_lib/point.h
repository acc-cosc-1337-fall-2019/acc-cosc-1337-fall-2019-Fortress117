#ifndef POINT_H
#define POINT_H

namespace mod10ex
{
	class Point
	{
	public:
		Point(int a, int b) : x(a), y(b) {}
		int x;
		int y;
	};
}
#endif // !POINT_H