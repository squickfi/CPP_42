#pragma once

#include <iostream>

class Brain {

	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator = (const Brain &other);

		std::string getIdea(int num) const;
		void setIdea(int num, std::string idea);
};
