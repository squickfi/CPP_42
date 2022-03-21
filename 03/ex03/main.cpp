#include "DiamondTrap.hpp"

int main() {

	DiamondTrap ugly("VeryUgly", "Ugly");

	std::cout << "\n";
	ugly.whoami();
	std::cout << "\nHP = " << ugly.getHitPoints()
				<< " EP = " << ugly.getEnergyPoints()
				<< " Dmg = " << ugly.getAttackDamage() << "\n\n";
	ugly.attack("target");
	ugly.takeDamage(10);
	ugly.beRapaired(5);
	std::cout << "\nHP = " << ugly.getHitPoints()
				<< " EP = " << ugly.getEnergyPoints()
				<< " Dmg = " << ugly.getAttackDamage() << "\n\n";

	ugly.guardGate();
	ugly.highFivesGuys();
	std::cout << "\n";

	return (0);
}