#pragma once

#include "Weapon.hpp"

class HumanA {

	private:
	
		std::string name;
		Weapon &weapon;

	public:

		HumanA(std::string const &name, Weapon& weapon);
		~HumanA();

		void attack();
		void setWeapon(Weapon &weapon);
};