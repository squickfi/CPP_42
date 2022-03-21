#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyReguestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {

	std::cout << "Conctructor was called for an intern\n";
}

Intern::Intern(const Intern &other) {

	std::cout << "Copy conctructor was called for an intern\n";
	(void)other;
}

Intern::~Intern() {

	std::cout << "Dectructor was called for an intern\n";
}

Intern &Intern::operator = (const Intern &other) {

	std::cout << "Operator = was called for an intern\n";
	(void)other;
	return *this;
};

Form *Intern::makeForm(std::string formType, std::string target) {

	std::string formTypes[3] = { "shrubbery creation", "robotomy reguest", "presidential pardon" };
	Form *forms[4] = { new ShrubberyCreationForm(target), new RobotomyReguestForm(target), 
						new PresidentialPardonForm(target), NULL};

	int i = 0;
	while (i < 3)
	{
		if (formTypes[i] == formType)
			break ;
		i++;
	}

	if (i == 3)
		std::cerr << "Intern can't make an unknown form\n";
	else
		std::cout << "Intern creates " << formType << " form\n";

	for (int j = 0; j < 3; j++)
		if (j != i)
			delete forms[j];

	return forms[i];
}
