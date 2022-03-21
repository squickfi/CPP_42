#pragma once

#include <iostream>

class Bureaucrat;

class Form {

	private:

		const std::string name;
		const int gradeToSign;
		const int gradeToExecute;
		bool isSigned;

	public:

		Form(std::string name);
		Form(std::string name, int sign, int execute);
		~Form();
		Form(const Form &other);
		Form &operator = (const Form &other);

		const std::string &getName() const;
		const int &getGradeToSign() const;
		const int &getGradeToExecute() const;
		const bool &getIsSigned() const;

		void beSigned(Bureaucrat &bur);

		class GradeTooHeighException : public std::exception {
			public:
				virtual const char* what() const throw() { return ("the grade of the bureaucrat is too heigh"); }
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() { return ("the grade of the bureaucrat is too low"); }
		};

		class FormIsAlreadySigned : public std::exception {
			public:
				virtual const char* what() const throw() { return ("the form is already signed"); }
		};
};
