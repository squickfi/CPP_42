#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name)
	: name(name), gradeToSign(150), gradeToExecute(150), isSigned(false) {

	std::cout << getName() << ": constructor was called\n";
}

Form::Form(std::string name, int sign, int execute) 
	: name(name), gradeToSign(sign), gradeToExecute(execute), isSigned(false) {

	std::cout << getName() << ": constructor was called\n";
}

Form::~Form() {

	std::cout << getName() << ": destructor was called\n";
}

Form::Form(const Form &other) 
	: name(other.getName()), gradeToSign(other.getGradeToSign()),
	gradeToExecute(other.getGradeToExecute()), isSigned(other.getIsSigned()) {

	std::cout << getName() << ": copy constructor was called\n";
}

Form &Form::operator = (const Form &other) {

	std::cout << "Only isSigned bool can be copied\n";
	this->isSigned = other.getIsSigned();
	return *this;
}

const std::string &Form::getName() const { return name; }
const int &Form::getGradeToSign() const { return gradeToSign; }
const int &Form::getGradeToExecute() const { return gradeToExecute; }
const bool &Form::getIsSigned() const { return isSigned; }

void Form::beSigned(Bureaucrat &bur) {

	if (isSigned)
		throw FormIsAlreadySigned();
	if (bur.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

std::ostream &operator << (std::ostream &ostr, const Form &type) {

	ostr << "Form \"" << type.getName() << "\" ";
	if (type.getIsSigned())
		ostr << "is signed\n";
	else
		ostr << "is not signed";
	return ostr;
}
