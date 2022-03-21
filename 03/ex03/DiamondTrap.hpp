#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:

		std::string name;

	public:
	
		DiamondTrap();
		DiamondTrap(std::string name, std::string ctName);
		DiamondTrap(const DiamondTrap &other);
		~DiamondTrap();

		DiamondTrap &operator = (const DiamondTrap &other);

		void whoami();
};