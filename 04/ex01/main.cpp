#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++) {

		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}

	return 0;
}