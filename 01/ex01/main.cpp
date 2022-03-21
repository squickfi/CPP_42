#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
	
	Zombie dude_1("John1");
	dude_1.announce();

	std::cout << "\nMaking horde:\n";
	Zombie *horde = zombieHorde(10, "Noname");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	std::cout << "\n";

	Zombie dude_2("John2");
	Zombie dude_3("John3");
	Zombie dude_4("John4");
	Zombie dude_5("John5");
}