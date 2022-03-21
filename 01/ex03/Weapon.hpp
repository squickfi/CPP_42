#pragma once

#include <iostream>
#include <string>

class Weapon {

	private:

		std::string type;

	public:
	
		Weapon(std::string const& type);
		Weapon();
		~Weapon();

		std::string const& getType(void);
		void setType(std::string const& type);
};