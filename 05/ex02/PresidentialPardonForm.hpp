#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:

		std::string target;

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator = (const PresidentialPardonForm &other);

		const std::string &getTarget() const;

		void execute(const Bureaucrat &executor) const;
};
