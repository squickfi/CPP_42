#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong ???") {}

WrongAnimal::WrongAnimal(std::string type) : type(type) {}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {}

WrongAnimal::~WrongAnimal() {}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other) {

	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const {

	std::cout << type << " says something really strange...\n";
}

std::string WrongAnimal::getType() const { return (type); }