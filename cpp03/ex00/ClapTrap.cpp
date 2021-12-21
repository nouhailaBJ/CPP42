#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
    std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ct;
}
ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs.getName();
    this->_Hitpoints = rhs.getHitPoints();
    this->_AttackDamage = rhs.getAttackDamage();
    this->_EnergyPoints = rhs.getEnergyPoints();
    return (*this);
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor Called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap <" << _name << "> attack <" << target 
    << ">, causing <" << _Hitpoints << "> points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap <" << _name << "> take damage <" << amount << ">\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap <" << _name << "> Repaired <" << amount << ">\n";
}

// accessors of  attributes
std::string ClapTrap::getName( void ) const
{
    return (_name);
}
int	ClapTrap::getHitPoints( void ) const
{
     return (_Hitpoints);
}
int	ClapTrap::getEnergyPoints( void ) const
{
    return (_EnergyPoints);
}
int	ClapTrap::getAttackDamage( void ) const
{
    return (_AttackDamage);
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}