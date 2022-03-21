#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {

	std::cout << "DiamondTrap default construstor was called (for Noname)\n";
	ScavTrap st;
	FragTrap ft;

	this->name = "Noname";
	setHitPoints(ft.getHitPoints());
	setEnergyPoints(st.getEnergyPoints());
	setAttackDamage(ft.getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name, std::string ctName) {

	std::cout << "DiamondTrap construstor was called for " << name << "\n";
	ScavTrap st;
	FragTrap ft;

	std::string ctRealName = ctName.substr(0, ctName.find("_clap_name"));
	setName(ctRealName);
	this->name = name;
	setHitPoints(ft.getHitPoints());
	setEnergyPoints(st.getEnergyPoints());
	setAttackDamage(ft.getAttackDamage());
}

DiamondTrap::~DiamondTrap() {
	
	std::cout << "DiamondTrap destrustor was called for " << name << "\n";
}

void DiamondTrap::whoami() {

	std::cout << "whoami function was called by " << name << "\n";
	std::cout << "clap name is: " << getName() << ", my name is: " << name << "\n";
}