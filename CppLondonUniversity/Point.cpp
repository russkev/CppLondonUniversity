#include "Point.h"

bool Point::equal_to(const Point & other) const 
{
	return (x == other.x && y == other.y);
}

