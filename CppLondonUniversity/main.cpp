#include <iostream>
#include <string>
#include <cctype>
#include <vector>

struct student 
{
	std::string first_name{};
	std::string surname{};
	student() { ++id; }
	static int id;

};

int main()
{
	student s1;
	student s2;
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