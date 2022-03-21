#include "HumanB.hpp"

HumanB::HumanB(std::string const& name, Weapon& weapon) : name(name), weapon(&weapon) {}

HumanB::HumanB(std::string const& name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() {

	if (weapon)
		std::cout << name << " atacks with their " << weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon) {
	
	this->weapon = &weapon;
}