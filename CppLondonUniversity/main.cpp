#include <iostream>
#include <string>
#include <cctype>
#include <vector>

struct Student 
{
	std::string first_name;
	std::string surname;
};

void print_surname(const Student& s)
{
	std::cout << s.surname << "\n";
}


int main() 
{
	Student s1{ "Billy", "Madison" };

	std::vector<Student> students{
		{"Bob", "Jones"},
		{"Alice", "Wendsworth"},
		{"Carl", "Singer"}
	};

	for (const auto & i : students) {
		print_surname(i);
	};

	auto x = 0;
	std::cin >> x;
}