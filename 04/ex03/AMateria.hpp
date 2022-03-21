#pragma once

#include <iostream>

class ICharacter;

class AMateria {

	private:
		std::string type;

	public:
		AMateria(std::string type);
		AMateria(const AMateria &other);
		virtual ~AMateria();
		AMateria &operator = (const AMateria &other);

		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
