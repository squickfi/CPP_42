#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Noname", 100, 100, 30) {

    std::cout << "FragTrap default construstor was called (for Noname)\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {

    std::cout << "FragTrap construstor was called for " << getName() << "\n";
}

FragTrap::FragTrap(const FragTrap &other) : 
    ClapTrap(other.getName(), other.getHitPoints(), 
    other.getEnergyPoints(), other.getAttackDamage()) {

    std::cout << "FragTrap copy construstor was called\n";
}

FragTrap &FragTrap::operator = (const FragTrap &other) {

    std::cout << "FragTrap copy assignment operator was called\n";
    ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap() {

    std::cout << "FragTrap destrustor was called for " << getName() << "\n";
}

void FragTrap::highFivesGuys() const {

	std::cout << "highFivesGuys function was called by " << getName() << "\n";
	std::cout << getName() << ": high fives guys!!!\n";
}