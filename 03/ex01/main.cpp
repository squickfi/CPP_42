#include "ScavTrap.hpp"

int main() {

    ScavTrap John("John");

    John.guardGate();

    ScavTrap Jim(John);
    Jim.takeDamage(20);
    ScavTrap Jane = Jim;
    std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";
    Jane.takeDamage(30);
    std::cout << "Jane's hit points: " << Jane.getHitPoints() << "\n";

    return (0);
}