#include "Brain.hpp"

Brain::Brain() {

	std::cout << "A Brain was created c:\n";
	for (int i = 0; i < 100 ; i++) {

		ideas[i] = "idea!";
	}
}

Brain::Brain(const Brain &other) {

	std::cout << "A Brain was created c:\n";
	for (int i = 0; i < 100; i++) {

		ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator = (const Brain &other) {

	for (int i = 0; i < 100; i++) {

		ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {

	std::cout << "A Brain was deleted :c\n";
}

std::string Brain::getIdea(int num) const {

	if (num < 0 || num > 99)
		throw std::out_of_range("Wrong index in getIdea");
	return (ideas[num]);
}

void Brain::setIdea(int num, std::string idea) {

	if (num < 0 || num > 99)
		throw std::out_of_range("Wrong index in getIdea");
	ideas[num] = idea;
}