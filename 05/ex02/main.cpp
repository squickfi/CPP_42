#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyReguestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat John1("John1", 100);
	Bureaucrat John2("John2", 50);

	std::cout << John1 << John2 << "\n";

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

	RobotomyReguestForm form1("target");
	PresidentialPardonForm form2("You");
	ShrubberyCreationForm form3("test");

	John1.signForm(form1);
	John2.signForm(form1);
	John1.signForm(form2);
	John2.signForm(form2);
	John1.signForm(form3);
	John2.signForm(form3);

	std::cout << "\n";

	John1.executeForm(form1);
	John1.executeForm(form2);
	John1.executeForm(form3);
	John2.executeForm(form1);
	John2.executeForm(form2);
	John2.executeForm(form3);

	return 0;	
}
