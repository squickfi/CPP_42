#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

	private:

		std::string target;
		static std::string tree;

	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);

		const std::string &getTarget() const;

		void execute(const Bureaucrat &executor) const;

		class ErrorOpenFile : public std::exception {
			public:
				virtual const char* what() const throw() { return ("file can't be opened or created"); }
		};
};
