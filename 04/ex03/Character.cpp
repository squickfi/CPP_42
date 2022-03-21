#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"

Character::Character(std::string name) {

	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &other) {

	this->name = other.getName();
	// for (int i = 0; i < 4; i++) {
	// 	if (inventory[i]) {
	// 		delete inventory[i];
	// 		inventory[i] = NULL;
	// 	}
	// }
	
	for (int i = 0; i < 4; i++) {
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		// if (inventory[i])
			delete inventory[i];
}

Character &Character::operator = (const Character &other) {

	this->name = other.getName();
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) {
			delete inventory[i];
			inventory[i] = NULL;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m) {

	int i = 0;
	for (; i < 4; i++)
		if (inventory[i] == NULL)
			break ;
	if (i < 4)
		inventory[i] = m;
	else
		std::cout << "The invenroty's full\n";
}

void Character::unequip(int idx) {

	if (idx >= 0 && idx < 4) 
		inventory[idx] = NULL;
	else
		std::cout << "Wrong index, try from 0 to 3\n";
}

void Character::use(int idx, ICharacter &target) {

	if (idx >= 0 && idx < 4) {

		if (inventory[idx] == NULL) {

			std::cout << "Trere's no materia on this place\n";
			return ;
		}

		std::cout << getName() << " uses ";
		inventory[idx]->use(target);
	}
	else
		std::cout << "Wrong index, try from 0 to 3\n";
}