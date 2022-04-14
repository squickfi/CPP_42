#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *lead = new Zombie[N];
	for (int i = 0; i < N; i++)
		lead[i].setName(name);
	return (lead);
}
