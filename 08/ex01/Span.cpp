#include "Span.hpp"

Span::Span() : max(0), space_left(0) {}

Span::Span(const unsigned int &n) : max(n), space_left(n) {}

Span::Span(const Span &other) {

	numbers = other.numbers;
	max = other.max;
	space_left = other.space_left;
}

Span::~Span() {}

Span &Span::operator = (const Span &other) {

	numbers = other.numbers;
	max = other.max;
	space_left = other.space_left;
	return *this;
}

void Span::addNumber(int num) {

	if (!space_left)
		throw std::out_of_range("Can't add more numbers");
	
	numbers.push_back(num);
	--space_left;
}

void Span::addRandomNumbers(int count) {

	srand(time(NULL));

	for (int i = 0; i < count; ++i) {

		try
		{
			this->addNumber(rand());
		}
		catch(const std::exception& e)
		{
			std::cerr << i << " numbers was added, can't add more" << '\n';
			return ;
		}
	}
}

void Span::addRandomNumbers(int count, int cap) {

	srand(time(NULL));

	for (int i = 0; i < count; ++i) {

		try
		{
			this->addNumber(rand() % cap);
		}
		catch(const std::exception& e)
		{
			std::cerr << i << " numbers was added, can't add more" << '\n';
			return ;
		}
	}
}

void Span::addWithIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	std::vector<int> tmp(begin, end);
	if (tmp.size() > space_left)
		throw std::out_of_range("Can't add so many numbers");

	for (; begin != end; ++begin) {

		numbers.push_back(*begin);
		--space_left;
	}
}

int Span::shortestSpan() const {

	if (numbers.size() < 2)
		throw std::logic_error("Span can't be found, too few numbers");

	std::vector<int> tmp = numbers;
	
	int span;
	std::vector<int>::iterator it;

	std::sort(tmp.begin(), tmp.end());
	for (it = tmp.begin() + 1, span = *it - *(it - 1); it < tmp.end() - 1; ++it)
		if (*(it + 1) - *it < span)
			span = *(it + 1) - *it;
	
	return span;
}

int Span::longestSpan() const {

	if (numbers.size() < 2)
		throw std::logic_error("Span can't be found, too few numbers");

	std::vector<int> tmp = numbers;
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

std::ostream &	operator<<( std::ostream & ostr, Span const & instance)
{
	try
	{
		int	shortest = instance.shortestSpan();
		int	longest = instance.longestSpan();
		
		ostr << "Shortest span is "	<< shortest
				<< " and longest is " << longest;
	}
	catch(const std::exception& e)
	{
		ostr << "Too few values to print information";
	}

	return ostr;
}