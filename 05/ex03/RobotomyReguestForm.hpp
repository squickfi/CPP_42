#pragma once

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyReguestForm : public Form {

	private:

		std::string target;

	public:

		RobotomyReguestForm(std::string target);
		RobotomyReguestForm(const RobotomyReguestForm &other);
		~RobotomyReguestForm();
		RobotomyReguestForm &operator = (const RobotomyReguestForm &other);

		const std::string &getTarget() const;

		void execute(const Bureaucrat &executor) const;
};
