#include "ClapTrap.hpp"

int main() {

    ClapTrap John("John");
    ClapTrap Jim("Jim");

    John.attack("Jim");
    Jim.takeDamage(0);
    Jim.beRapaired(0);
    std::cout << "Jim's hit points: " << Jim.getHitPoints() << "\n";
    Jim.beRapaired(10);
    std::cout << "Jim's hit points: " << Jim.getHitPoints() << "\n";

    return (0);
}