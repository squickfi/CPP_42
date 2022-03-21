#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define CONTACTS_NUMBER 8

# include "Contact_class.hpp"

class	PhoneBook {

	private:
	
		Contact contacts[CONTACTS_NUMBER];
		int	index;
		int	all_contacts;

	public:

		PhoneBook();
		~PhoneBook();

		void	show_prompt(void);
		void	add_contact(void);
		void	search_contact(void);
};

#endif