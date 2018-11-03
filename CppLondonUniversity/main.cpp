#include <iostream>
#include <string>
#include <cctype>
#include <vector>

struct student 
{
	// Member Variables;
	std::string m_first_name{};
	std::string m_surname{};
	int m_id;
	static int next_id;

	// Constructor
	student() { m_id = ++next_id; }
	student(const std::string& s_first_name, const std::string& s_surname) : m_first_name(s_first_name), m_surname(s_surname), m_id(++next_id) {}

	// Member functions
	void print()
{
		std::cout << m_first_name << " " << m_surname << " " << m_id << '\n';
	}


};

int student::next_id = 0;

int main()
{
	student s1;
	student s2("John", "Wick");
	s2.print();
	student s3;
}



//struct A {
//	A() { ++A_count; }
//	A(const A&) { ++A_count; }
//	A(A&&) { ++A_count; }
//	~A() { --A_count; }
//
//	static int get_count() { return A_count; }
//private:
//	static int A_count;
//};
//
//int main() {
//	int B = 1;
//	A var;
//
//	//int c0 = var.get_count(); //some compilers give a warning, but it's ok.
//	//int c1 = A::get_count(); //normal way
//}