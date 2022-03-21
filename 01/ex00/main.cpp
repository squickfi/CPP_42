#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
	
	Zombie dude_1("John1");
	dude_1.announce();

	std::cout << "\nMaking horde:\n";
	for (int i = 0; i < 10; i++)
		randomChump("Noname");
	std::cout << "\n";

	std::cout << "\nMaking dinamic Zombies:\n";
	Zombie *din;
	for (int i = 0; i < 5; i++)
	{
		din = newZombie("Dinamic");
		din->announce();
		delete din;
	}
	std::cout << "\n";

	Zombie dude_2("John2");
	Zombie dude_3("John3");
	Zombie dude_4("John4");
	Zombie dude_5("John5");
}