#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {

	brain = new Brain;
}

Cat::Cat(const Cat &other) : Animal(other) {

	brain = new Brain;
	brain->operator=(*other.brain);
}

Cat::~Cat() { delete brain; }

Cat &Cat::operator = (const Cat &other) {
	
	Animal::operator=(other);
	delete brain;
	brain = new Brain;
	brain->operator=(*other.brain);
	return (*this);
}

void Cat::makeSound() const {

	std::cout << getType() << " says Meow\n";
}

std::string Cat::getIdea(int num) const {

	return (brain->getIdea(num));
}

void Cat::setIdea(int num, std::string idea) {

	brain->setIdea(num, idea);
}
