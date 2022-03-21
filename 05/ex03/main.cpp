#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyReguestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	Intern intern;
	Form *forms[4];
	std::string formTypes[4] = { "shrubbery creation", "robotomy reguest", "presidential pardon", "dfggrf"};

	for (int i = 0; i < 4; i++)
		forms[i] = intern.makeForm(formTypes[i], "TARGET");

	std::cout << "\n";

	Bureaucrat John("John", 1);
	for (int i = 0; i < 3; i++) {

		John.signForm(*forms[i]);
		John.executeForm(*forms[i]);
	}
	
	for (int i = 0; i < 4; i++)
		delete forms[i];

	return 0;	
}
