#pragma once

struct Metres;
struct Feet;

struct Metres {
	double m_value = 0.0;
	void add(const Metres& s_metres);
	void add(const Feet& s_feet);
	template <typename T>
	void operator += (const T& other) { add(other); }
};

struct Feet {
	double m_value = 0.0;
	void add(const Feet& s_feet);
	void add(const Metres& other);
	template <typename T>
	void operator += (const T& other) { add(other); }
};

Metres operator "" _m(const long double value);
Feet operator "" _f(const long double value);
