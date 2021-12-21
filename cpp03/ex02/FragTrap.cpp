#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "Default FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    setName(name);
    _Hitpoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap & FragTrap::operator=(FragTrap const &ft)
{
    if (this == &ft)
        return (*this);
    _name = ft.getName();
    _Hitpoints = ft.getHitPoints();
    _EnergyPoints = ft.getEnergyPoints();
    _AttackDamage = ft.getAttackDamage();
    return (*this);
}
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "give Me High Five Man !" << std::endl;
}