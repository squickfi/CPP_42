#include "Karen.hpp"

void Karen::complain(std::string level) {

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	_level lev = _notsignificant;
	for (int i = _debug; i <= _error; i++) {

		if (level == levels[i]) {

			lev = (_level)i;
			break ;
		}
	}

	void (Karen::*complaint[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	switch (lev) {

		case _debug:
			(this->*complaint[_debug])();
		
		case _info:
			(this->*complaint[_info])();

		case _warning:
			(this->*complaint[_warning])();
		
		case _error:
			(this->*complaint[_error])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

void Karen::debug() {

	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Karen::info() {

	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Karen::warning() {

	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Karen::error() {
	
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}
