#pragma once
struct Point
{
	int x = 0;
	int y = 0;
	bool equal_to(const Point & other) const;
	bool not_equal_to(const Point & other) const
	{
		return !(equal_to(other));
	}
};

