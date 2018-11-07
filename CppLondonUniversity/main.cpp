#include "Point.h"
#include <cassert>

int main()
{
	Point p1{ 0,1 };
	Point p2{ 0,1 };
	Point p3{ 1,1 };
	Point p4{ 23234928, 12312434 };
	const Point p6{ 5,6 };
	Point p7{ 5,6 };
	Point p8{ 4,6 };
	Point p9{ 4,5 };

	assert(p1.equal_to(p2));
	assert(!(p1.equal_to(p3)));
	assert(p1.not_equal_to(p3));
	assert(!(p1.not_equal_to(p2)));
	assert(p1.not_equal_to(p4));
	assert(p6.equal_to(p7));
	assert(p8.not_equal_to(p9));
	assert(p9.equal_to(p9));
}