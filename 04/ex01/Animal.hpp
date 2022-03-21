#pragma once

#include <iostream>

class Animal {

	private:

		std::string type;

	protected:

		Animal(std::string type);

	public:
	
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();
		Animal &operator = (const Animal &other);

		virtual void makeSound() const;
		std::string getType() const;
};