#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {

	std::cout << name << ": constructor was called\n";

	if (grade < 1)
		throw GradeTooHeighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {

	std::cout << getName() << ": destructor was called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) 
	: name(other.getName()), grade(other.getGrade()) {
	
	std::cout << getName() << ": copy constructor was called\n";
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other) {

	std::cout << "Name won't be copied, only grade\n";
	grade = other.getGrade();
	return *this;
}

const std::string &Bureaucrat::getName() const { return name; }

const int &Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade(int value) {

	if (grade - value < 1)
		throw GradeTooHeighException();
	grade -= value;
	std::cout << getName() << ": grade was incremented for " << value << "\n";
}

void Bureaucrat::decrementGrade(int value) {

	if (grade + value > 150)
		throw GradeTooLowException();
	grade += value;
	std::cout << getName() << ": grade was decremented for " << value << "\n";
}

std::ostream &operator << (std::ostream &ostr, const Bureaucrat &type) {

	ostr << type.getName() << ", bureaucrat grade " << type.getGrade() << ".\n";
	return ostr;
}
