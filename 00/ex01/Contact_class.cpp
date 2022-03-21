#include "Contact_class.hpp"

Contact::Contact(void) {
	
	this->fields_name[0] = "first_name";
	this->fields_name[1] = "last_name";
	this->fields_name[2] = "nickname";
	this->fields_name[3] = "phone_number";
	this->fields_name[4] = "darkest_secret";
}

Contact::~Contact(void) {}

bool Contact::set_info(int index)
{
	this->index = index;
	std::cout << "Write contact's data: \n\n";
	for (int i = first_name; i <= darkest_secret; i++) {

		std::cout << Contact::fields_name[i] << ": ";
		std::getline(std::cin, Contact::info[i]);
	}

	for (int i = first_name; i <= darkest_secret; i++) {

		if (this->info[i].length() == 0) {

			std::cout << "\nA contact can't have empty fields!\n\n";
			return (false);
		}
	}

	std::cout << "\nContact was added.\n\n";
	return (true);
}

void	Contact::display_header(void) {

	std::cout << "|" << std::setw(10) << this->index + 1;
	for (int i = first_name; i <= nickname; i++) {

		std::cout << "|";
		if (this->info[i].size() > 10)
			std::cout << this->info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|\n";
}

void	Contact::display(void) {
	
	std::cout << std::endl;
	for (int i = first_name; i <= darkest_secret; i++)
		std::cout << "> " << this->fields_name[i] << ": " << this->info[i] << std::endl;
	std::cout << std::endl;
}