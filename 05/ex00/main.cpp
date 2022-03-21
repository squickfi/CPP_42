#include "Bureaucrat.hpp"

int main() {

	Bureaucrat John1("John1", 100);
	Bureaucrat John2("John2", 50);

	try {
		
		Bureaucrat John3("John3", 170);
	}
	catch(const std::exception& e) {

		std::cerr << "\n" << e.what() << "\n\n";
	}
	
	try {

		John2.incrementGrade(100);
	}
	catch(const std::exception& e) {

		std::cerr << e.what() << '\n';
	}

	try {

		John2.incrementGrade(15);
	}
	catch(const std::exception& e) {
		
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n" << John1 << John2 << "\n";

	return 0;	
}