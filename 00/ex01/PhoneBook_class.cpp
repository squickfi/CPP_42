#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook(void) : index(0), all_contacts(0) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::show_prompt(void) {

	std::cout << "### My Awesome Phone Book ###\nEnter a command (ADD, SEARCH or EXIT):\n";
}

void PhoneBook::add_contact(void) {

	if (this->index == CONTACTS_NUMBER) {

		std::cout << "The phone book is full! We'll rewrite data from the beginning.\n";
		this->index = 0;
	}
	if (this->contacts[this->index].set_info(this->index) == true) {

		this->index++;
		this->all_contacts++;
	}
}

void PhoneBook::search_contact(void) {

	if (this->index == 0) {

		std::cout << "Add contact(s) first.\n\n";
		return ;
	}

	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First name| Last name|  Nickname|\n";
	std::cout << "|-------------------------------------------|\n";

	for (int i = 0; i < this->index || (this->all_contacts != this->index && i < CONTACTS_NUMBER); i++) {

		this->contacts[i].display_header();
		std::cout << "|-------------------------------------------|\n";
	}

	std::cout << "\nWrite contact's index for more information:\n> ";
	std::string ind;
	std::getline(std::cin, ind);

	int i;
	try	{

		i = std::stoi(ind);
	}
	catch(const std::exception& e) {

		i = -1;
	}
	
	if (i > 0 && (i - 1 < this->index || (this->all_contacts != this->index && i - 1 < CONTACTS_NUMBER)))
		this->contacts[i - 1].display();
	else
		std::cout << "You should choose one of the contacts' indexes.\n\n";
}