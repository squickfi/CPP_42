#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria(other) {}

Cure::~Cure() {}

Cure &Cure::operator = (const Cure &other) {

	AMateria::operator=(other);
	return (*this);
}

AMateria *Cure::clone() const {

	return (new Cure());
}

void Cure::use(ICharacter &target) {

	std::cout << getType() << ": \" * heals " << target.getName() << "\'s wounds * \"\n";
}