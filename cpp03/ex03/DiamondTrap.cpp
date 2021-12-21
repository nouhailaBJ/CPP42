#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Default Constructor DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    ClapTrap::setName(name + "_clap_name");
    _Hitpoints = FragTrap::getHitPoints();
    _EnergyPoints = ScavTrap::getEnergyPoints();
    _AttackDamage = FragTrap::getAttackDamage();
    std::cout << "DiamondTrap Constructor Called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor Called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamonTrap Name is " << this->_name << " clapTrap name is " << ClapTrap::_name << std::endl;
}
