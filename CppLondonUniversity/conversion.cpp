#include "conversion.h"

Metres to_metres(const Feet& s_feet)
{
	return { s_feet.m_value * 0.3048 };
}

Feet to_feet(const Metres& s_metres) 
{
	return { s_metres.m_value / 0.3048 };
}

void Metres::add(const Metres& s_metres)
{
	m_value += s_metres.m_value;
}

void Metres::add(const Feet& s_feet)
{
	Metres feet_to_metres = to_metres(s_feet);
	m_value += feet_to_metres.m_value;
}

void Feet::add(const Feet& s_feet)
{
	m_value += s_feet.m_value;
}

void Feet::add(const Metres& s_metres)
{
	Feet metres_to_feet = to_feet(s_metres);
	m_value += metres_to_feet.m_value;
}

Metres operator "" _m(const long double value) {
	return Metres{ double(value) };
}

Feet operator "" _f(const long double value) {
	return Feet{ double(value) };
}

