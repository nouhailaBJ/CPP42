#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class  FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &rhs);
        FragTrap &operator=(FragTrap const &ft);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif