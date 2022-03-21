#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <time.h>

class Span {

	private:

		std::vector<int> numbers;
		unsigned int max;
		unsigned int space_left;

	public:

		Span();
		Span(const unsigned int &n);
		Span(const Span &other);
		~Span();
		Span &operator = (const Span &other);

		void addNumber(int num);
		void addRandomNumbers(int count);
		void addRandomNumbers(int count, int cap);
		void addWithIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan() const;
		int longestSpan() const;
};

std::ostream &	operator<<( std::ostream & ostr, Span const & instance);