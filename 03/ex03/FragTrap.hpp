#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public:
    
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        ~FragTrap();

        FragTrap &operator = (const FragTrap &other);

        void highFivesGuys() const;
};