#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {}

Dog::Dog(const Dog &other) : Animal(other) {}

Dog::~Dog() {}

Dog &Dog::operator = (const Dog &other) {
	
	Animal::operator=(other);
	return (*this);
}

void Dog::makeSound() const {

	std::cout << getType() << " says Bark\n";
}