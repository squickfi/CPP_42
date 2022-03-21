#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string type) : type(type) {}

AMateria::AMateria(const AMateria &other) : type(other.type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator = (const AMateria &other) {

	this->type = other.type;
	return (*this);
}

std::string const &AMateria::getType() const {

	return (this->type);
}

void AMateria::use(ICharacter &target) {

	std::cout << "AMateria: does something with " << target.getName() << "\n";
}
