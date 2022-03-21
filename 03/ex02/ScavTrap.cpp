#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Noname", 100, 50, 20) {

    std::cout << "ScavTrap construstor was called for " << getName() << "\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {

    std::cout << "ScavTrap construstor was called for " << getName() << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : 
    ClapTrap(other.getName(), other.getHitPoints(), 
    other.getEnergyPoints(), other.getAttackDamage()) {

    std::cout << "ScavTrap copy construstor was called\n";
}

ScavTrap &ScavTrap::operator = (const ScavTrap &other) {

    std::cout << "ScavTrap copy assignment operator was called\n";
    ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap() {

    std::cout << "ScavTrap destrustor was called for " << getName() << "\n";
}

void ScavTrap::guardGate() const {

    std::cout << "guardGate function was called by " << getName() << "\n";
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode\n";
}

void ScavTrap::attack(std::string target) {

    std::cout << "attack function was called by " << name << "\n";
	if (hitPoints > 0 && energyPoints > 0) {

		std::cout 	<< "ScavTrap " << name << " cruelly attacks " << target 
					<< ", causing " << attackDamage << " points of damage!\n";
		energyPoints--;
	}
}