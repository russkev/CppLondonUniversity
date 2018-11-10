#include <cassert>
#include <string>

#include "conversion.h"

std::string to_string(const Metres& s_metres)
{
	return std::to_string(s_metres.m_value);
}

std::string to_string(const Feet& s_feet)
{
	return std::to_string(s_feet.m_value);
}



int main()
{
	Metres m1{ 10 };
	Feet f1{ 10 };

	m1 += m1;
	m1 += f1;
	m1 += 10.0_m;
	m1 += 10.0_f;
	f1 += f1;
	f1 += m1;	

	int i = 0;
}