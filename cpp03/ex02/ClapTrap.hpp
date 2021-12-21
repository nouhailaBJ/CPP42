#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include <iostream>
class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _Hitpoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &ct);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const & rhs);
        std::string		getName( void ) const;
        void setName(std::string name);
        int	getHitPoints( void ) const;
        int	getEnergyPoints( void ) const;
        int	getAttackDamage( void ) const;
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif