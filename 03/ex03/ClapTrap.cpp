#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:	name("Noname"), 
	hitPoints(100), 
	energyPoints(50), 
	attackDamage(20)
{
	std::cout << "ClapTrap default construstor was called (for Noname)\n";
}

ClapTrap::ClapTrap(std::string name)
:	name(name), 
	hitPoints(100), 
	energyPoints(50), 
	attackDamage(20)
{
	std::cout << "ClapTrap construstor was called for " << name << "\n";
}

ClapTrap::~ClapTrap() {
	
	std::cout << "ClapTrap destrustor was called for " << name << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
:	name(other.name), 
	hitPoints(other.hitPoints), 
	energyPoints(other.energyPoints), 
	attackDamage(other.attackDamage) 
{
	std::cout << "ClapTrap copy construstor was called\n";
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other) {

	std::cout << "ClapTrap copy assignment operator was called\n";
    this->name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();
	return (*this);
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int dmg) :
	name(name), hitPoints(hp), energyPoints(ep), attackDamage(dmg)
{

	std::cout << "ClapTrap protected construstor was called\n";
}

void ClapTrap::attack(const std::string target){
	
	std::cout << "attack function was called by " << name << "\n";
	if (hitPoints > 0 && energyPoints > 0) {

		std::cout 	<< "ClapTrap " << name << " attacks " << target 
					<< ", causing " << attackDamage << " points of damage!\n";
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "takeDamage function was called by " << name << "\n";
	if (hitPoints > 0 && energyPoints > 0) {

		std::cout 	<< "ClapTrap " << name << " gets " << amount 
					<< " damage!\n";
		hitPoints -= amount;
	}
}

void ClapTrap::beRapaired(unsigned int amount) {

	std::cout << "beRapaired function was called by " << name << "\n";
	if (hitPoints > 0 && energyPoints > 0) {

		std::cout 	<< "ClapTrap " << name << " was repaired for " << amount 
					<< " hit points!\n";
		hitPoints += amount;
	}
}

std::string ClapTrap::getName() const {	return (name); }
int ClapTrap::getHitPoints() const { return (hitPoints); }
int ClapTrap::getEnergyPoints() const { return (energyPoints); }
int ClapTrap::getAttackDamage() const { return (attackDamage); }

void ClapTrap::setName(std::string name) { this->name = name; }
void ClapTrap::setHitPoints(int value) { this->hitPoints = value; }
void ClapTrap::setEnergyPoints(int value) { this->energyPoints = value; }
void ClapTrap::setAttackDamage(int value) { this->attackDamage = value; }