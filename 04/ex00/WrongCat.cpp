#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator = (const WrongCat &other) {
	
	WrongAnimal::operator=(other);
	return (*this);
}

void WrongCat::makeSound() const {

	std::cout << getType() << " says Meow\n";
}