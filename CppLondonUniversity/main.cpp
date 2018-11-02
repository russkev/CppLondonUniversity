#include <iostream>
#include <string>
#include <cctype>

void print_string(const std::string& inString)
{
	std::cout << inString << '\n';
}


int main() 
{

	std::string string1 = "hello world";
	const char * stringLiteral1 = "this is a string literal";

	print_string(string1);
	print_string(std::string("blah blah blah"));
	print_string("Hello a third time");

	int x = 0;
	std::cin >> x;
}