#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::Zombie(void) : name("Dude") {}

Zombie::~Zombie(void) {

	std::cout << name << " was destroyed.\n";
}

void Zombie::announce(void) {
	
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}