#pragma once

#include <iostream>

class ClapTrap {

	private:

		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;

	public:
	
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);

		ClapTrap &operator = (const ClapTrap &other);

		void attack(const std::string target);
		void takeDamage(unsigned int amount);
		void beRapaired(unsigned int amount);

		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};