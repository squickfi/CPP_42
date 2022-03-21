#include "Animal.hpp"

Animal::Animal() : type("???") {}

Animal::Animal(std::string type) : type(type) {}

Animal::Animal(const Animal &other) : type(other.type) {}

Animal::~Animal() {}

Animal &Animal::operator = (const Animal &other) {

	this->type = other.type;
	return (*this);
}

void Animal::makeSound() const {

	std::cout << type << " says something really strange...\n";
}

std::string Animal::getType() const { return (type); }