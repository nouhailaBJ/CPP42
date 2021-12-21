#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Default ScavTrap Constructor Called" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Constructor Called" << std::endl;
    this->_name = name;
    this->_Hitpoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap <" << _name << "> attack <" << target 
    << ">, causing <" << _Hitpoints << "> points of damage!\n";
}