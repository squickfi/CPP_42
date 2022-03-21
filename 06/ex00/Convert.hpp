#pragma once

#include <iostream>
#include <limits>
#include <stdlib.h>
#include <cmath>

class Convert {

	private:

		enum _valueType {
			_noType = -1,
			_char,
			_int,
			_float,
			_double
		};

		_valueType currentType;
		double Value;

		void resetValues();
		bool ft_isdigit(int c) const;
		_valueType isInfOrNan(char *str, int i);
		_valueType parseStr(char *str);

		void printChar();
		void printInt();
		void printFloat();
		void printDouble();

		class EmptyInput : public std::exception {
			public:
				virtual const char* what() const throw() { return ("empty input"); }
		};

		class NotNumeric : public std::exception {
			public:
				virtual const char* what() const throw() { return ("input value is not numeric"); }
		};

	public:

		Convert();
		Convert(char *str);
		Convert(const Convert &other);
		~Convert();
		Convert &operator = (const Convert &other);

		bool convertStr(char *str);
		void printValue();
};