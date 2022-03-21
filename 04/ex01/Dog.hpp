#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:

		Brain *brain;

	public:
	
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog &operator = (const Dog &other);

		void makeSound() const;
		std::string getIdea(int num) const;
		void setIdea(int num, std::string idea);
};