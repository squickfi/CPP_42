#include "Zombie.hpp"

Zombie::Zombie(std::string z_name) : name(z_name) {}

Zombie::Zombie(void) : name("Dude") {}

Zombie::~Zombie(void) {

	std::cout << name << " was destroyed.\n";
}

void Zombie::announce(void) {

	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name) {

	this->name = name;
}