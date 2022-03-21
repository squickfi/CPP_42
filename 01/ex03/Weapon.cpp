#include "Weapon.hpp"

Weapon::Weapon(std::string const& type) : type(type) {}

Weapon::Weapon() : type("fists") {}

Weapon::~Weapon() {}

std::string const& Weapon::getType(void) {
	
	return (type);
}

void Weapon::setType(std::string const& type) {
	
	this->type = type;
}