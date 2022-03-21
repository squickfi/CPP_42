#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm for " + target, 25, 5), target(target) {

	// std::cout << "PresidentialPardonForm constructor was called for " << getName() << "\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {

	// std::cout << "PresidentialPardonForm destructor was called for " << getName() << "\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	:	Form(other) {

	// std::cout << "PresidentialPardonForm copy constructor was called for " << getName() << "\n";
	target = other.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator = 
	(const PresidentialPardonForm &other) {

	Form::operator=(other);
	target = other.getTarget();
	return *this;
}

const std::string &PresidentialPardonForm::getTarget() const { return target; }

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	checkExecutionPosibility(executor);
	std::cout << target << " has been pardoned by Zaphod BeebleBrox\n";
}
