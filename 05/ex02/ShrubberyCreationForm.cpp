#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

std::string ShrubberyCreationForm::tree =
"          &&& &&  & &&\n"
"      && &\\/&\\|& ()|/ @, &&\n"
"      &\\/(/&/&||/& /_/)_&/_&\n"
"   &() &\\/&|()|/&\\/ \'%\" & ()\n"
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
"&&   && & &| &| /& & % ()& /&&\n"
" ()&_---()&\\&\\|&&-&&--%---()~\n"
"     &&     \\|||\n"
"             |||\n"
"             |||\n"
"             |||\n"
"       , -=-~  .-^- _\n"
"              `\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm for " + target, 145, 137), target(target) {

	// std::cout << "ShrubberyCreationForm constructor was called for " << getName() << "\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	// std::cout << "ShrubberyCreationForm destructor was called for " << getName() << "\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	:	Form(other) {

	// std::cout << "ShrubberyCreationForm copy constructor was called for " << getName() << "\n";
	target = other.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = 
	(const ShrubberyCreationForm &other) {

	Form::operator=(other);
	target = other.getTarget();
	return *this;
}

const std::string &ShrubberyCreationForm::getTarget() const { return target; }

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

	checkExecutionPosibility(executor);

	std::ofstream ofile(target + "_shrubbery", std::ios::app);
	if (!ofile.is_open())
		throw ErrorOpenFile();
	ofile << tree;
}