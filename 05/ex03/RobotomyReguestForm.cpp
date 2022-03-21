#include "RobotomyReguestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyReguestForm::RobotomyReguestForm(std::string target)
	: Form("RobotomyReguestForm for " + target, 72, 45), target(target) {

	// std::cout << "RobotomyReguestForm constructor was called for " << getName() << "\n";
}

RobotomyReguestForm::~RobotomyReguestForm() {

	// std::cout << "RobotomyReguestForm destructor was called for " << getName() << "\n";
}

RobotomyReguestForm::RobotomyReguestForm(const RobotomyReguestForm &other)
	:	Form(other) {

	// std::cout << "RobotomyReguestForm copy constructor was called for " << getName() << "\n";
	target = other.getTarget();
}

RobotomyReguestForm &RobotomyReguestForm::operator = 
	(const RobotomyReguestForm &other) {

	Form::operator=(other);
	target = other.getTarget();
	return *this;
}

const std::string &RobotomyReguestForm::getTarget() const { return target; }

void RobotomyReguestForm::execute(const Bureaucrat &executor) const {

	checkExecutionPosibility(executor);
	srand(time(NULL));
	std::cout << getName() << ":\n* drilling  noises *\n";
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully\n";
	else
		std::cout << getTarget() << ": robotomy failed\n";
}
