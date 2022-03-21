#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {

	brain = new Brain;
}

Dog::Dog(const Dog &other) : Animal(other) {

	brain = new Brain;
	brain->operator=(*other.brain);
}

Dog::~Dog() { delete brain; }

Dog &Dog::operator = (const Dog &other) {
	
	Animal::operator=(other);
	delete brain;
	brain = new Brain;
	brain->operator=(*other.brain);
	return (*this);
}

void Dog::makeSound() const {

	std::cout << getType() << " says Bark\n";
}

std::string Dog::getIdea(int num) const {

	return (brain->getIdea(num));
}

void Dog::setIdea(int num, std::string idea) {

	brain->setIdea(num, idea);
}
