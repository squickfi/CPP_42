#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments: you should write one argument.\n";
		return (1);
	}

	Karen karen;
	std::string level = argv[1];
	karen.complain(level);
	return (0);
}