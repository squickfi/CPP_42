#include "Karen.hpp"

void Karen::complain(std::string level) {

	std::string levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	void (Karen::*complaint[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (int i = 0; i < 4; i++) {

		if (level == levels[i])
			(this->*complaint[i])();
	}
}

void Karen::debug() {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Karen::info() {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Karen::warning() {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Karen::error() {
	
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
