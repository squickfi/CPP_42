#pragma once

#include <iostream>

class Form;

class Intern {

	public:

		Intern();
		Intern (const Intern &other);
		~Intern();
		Intern &operator = (const Intern &other);

		Form *makeForm(std::string formType, std::string target);

		class ErrorMakingForm : public std::exception {
			public:
				virtual const char* what() const throw() { return ("Intern can't make an unknown form"); }
		};
};