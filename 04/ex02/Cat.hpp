#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat &operator = (const Cat &other);

		void makeSound() const;
		std::string getIdea(int num) const;
		void setIdea(int num, std::string idea);
};