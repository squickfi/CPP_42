#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {

	std::cout << name << " atacks with their " << weapon.getType() << "\n";
}

void HumanA::setWeapon(Weapon &weapon) {
	
	this->weapon = weapon;
}