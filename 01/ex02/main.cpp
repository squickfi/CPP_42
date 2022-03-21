#include <iostream>
#include <string>

int main() {
	
	std::string hi = "HI THIS IS BRAIN";

	std::string *ptr = &hi;
	std::string &ref = hi;

	std::cout << "The memory adress of the string variable: " << &hi << "\n";
	std::cout << "The memory adress held by ptr: " << ptr << "\n";
	std::cout << "The memory adress held by ref: " << &ref << "\n";

	std::cout << "The value of the string: " << hi << "\n";
	std::cout << "The value pointed to by ptr: " << *ptr << "\n";
	std::cout << "The value pointed to by ref: " << ref << "\n";

	return (0);
}
