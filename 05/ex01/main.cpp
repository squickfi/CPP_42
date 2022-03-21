#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Bureaucrat John1("John1", 100);
	Bureaucrat John2("John2", 50);

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

	Form form1("form1");
	Form form2("form2", 70, 30);

	std::cout << "\n";

	John1.signForm(form1);
	John2.signForm(form1);
	John1.signForm(form2);
	John2.signForm(form2);

	std::cout << "\n";

	return 0;	
}