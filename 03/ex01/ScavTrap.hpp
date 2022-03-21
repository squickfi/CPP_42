#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
    
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap();

        ScavTrap &operator = (const ScavTrap &other);

        void guardGate() const;
        virtual void attack(const std::string target);
};