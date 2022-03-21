#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string.h>
# include <string>

class Contact {

private:

	int			index;
	std::string	fields_name[5];
	std::string	info[5];

	enum field
	{
		first_name = 0,
		last_name,
		nickname,
		phone_number,
		darkest_secret
	};

public:
	Contact(void);
	~Contact(void);
	
	bool	set_info(int index);
	void	display_header(void);
	void	display(void);
};

#endif