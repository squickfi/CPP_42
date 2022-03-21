#pragma once

#include <iostream>

class Form;

class Bureaucrat {

	private:

		const std::string name;
		int grade;

	public:

		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator = (const Bureaucrat &other);

		const std::string &getName() const;
		const int &getGrade() const;
		void incrementGrade(int value);
		void decrementGrade(int value);

		bool signForm(Form &form);

		class GradeTooHeighException : public std::exception {
			public:
				virtual const char* what() const throw() { return ("The grade you set is too heigh"); }
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return ("The grade you set is too low"); }
		};
};

std::ostream &operator << (std::ostream &ostr, const Bureaucrat &type);