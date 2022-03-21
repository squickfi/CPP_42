#include "PhoneBook_class.hpp"

int main()
{
	PhoneBook 	annuaire;
	std::string	cmd;

	while (true) {
		
		annuaire.show_prompt();
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			annuaire.add_contact();
		else if (cmd == "SEARCH")
			annuaire.search_contact();
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
