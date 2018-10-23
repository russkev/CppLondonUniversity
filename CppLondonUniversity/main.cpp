#include <iostream>
#include <string>
#include <cctype>



void lower_case(std::string & inString)
{
	for (auto & i : inString) {
		//if (int(i) >= 65 && int(i) <= 90) {
		//	i += 32;
		//}	
		i = std::tolower(i);
	}
	return;
}

void headline_case(std::string & inString)
{
	if (inString.empty()) {
		return;
	}

	// Capitalise the first character of the string
	inString[0] = std::toupper(inString[0]);

	for (std::size_t i = 1; i < inString.size(); ++i) {
		if (inString[i - 1] == ' ') { //Single quotes means character, double means string
			inString[i] = std::toupper(inString[i]);
		}
	}

	//char prevChar = ' ';
	//for (auto & i : inString) {
	//	if (prevChar == ' ') {
	//		if (int(i) >= 97 && int(i) <= 122) {
	//			i -= 32;
	//		}
	//	}
	//	prevChar = i;
	//}
}

void sentance_case(std::string & inString)
{
	if (inString.empty()) {
		return;
	}

	// Capitalise the first character of the string
	inString[0] = std::toupper(inString[0]);

	for (std::size_t i = 2; i < inString.size(); ++i) {
		if (inString[i - 2] == '.' && inString[i - 1] == ' '){
			inString[i] = std::toupper(inString[i])
}
	}


	//char prevChar = '.';
	//for (auto & i : inString) {
	//	if (i != ' ') {
	//		if (prevChar == '.') {
	//			if (int(i) >= 97 && int(i) <= 122) {
	//				i -= 32;
	//			}
	//		}
	//		prevChar = i;
	//	}
	//}
}

void sentance_case2(std::string & inString)
{
	//char prevChar = '.';
	//for (auto & i : inString) {
	//	if (!std::isspace(i)) {
	//		if (prevChar == '.') {
	//			if (int(i) >= 97 && int(i) <= 122) {
	//				i -= 32;
	//			}
	//		}
	//		prevChar = i;
	//	}
	//}
	if (inString.empty()) {
		return;
	}

	// Capitalise the first character of the string
	inString[0] = std::toupper(inString[0]);

	for (std::size_t i = 0; i < inString.size(); ++i) {
		if (inString[i] == '.') {
			do {
				++i;
			} while (i < inString.size() && std::isspace(inString[i]));
		}
		if (i != inString.size()) {
			inString[i] = std::toupper(inString[i]);
		}
	}
}

void sentance_case3(std::string & inString)
{
	bool capitalise_next = true;

	for (std::size_t i = 0; i < inString.size(); ++i){
		if (capitalise_next) {
			inString[i] = std::toupper(inString[i]);
			capitalise_next = false;
		}

		if (inString == '.') {
			++i;
			if (i == inString.size()) {
				return;
			}

			std::size_t space_count = 0;
			for (std::size_t j = i; j < inString.size(); ++j) {
				if (!std::isspace(inString[j])) {}
				break;
			}
			++space_count;
		}

		inString.replace(i, space_count, " ");

}
	

}

int main() 
{
	std::string testString1 = "MiXeD";
	std::string testString2 = "hello world";
	std::string testString3 = "this is sentance 1. this is sentance 2";
	std::string testString4 = "sentance 1. \n\t\r sentance 2";

	lower_case(testString1);
	headline_case(testString2);
	sentance_case(testString3);
	sentance_case2(testString4);


	std::cout << testString1 << '\n';
	std::cout << testString2 << '\n';
	std::cout << testString3 << '\n';
	std::cout << testString4 << '\n';

	int x = 0;
	std::cin >> x;
}