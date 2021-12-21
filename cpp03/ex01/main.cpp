#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap ct1("nouhaila");
    ScavTrap st1("new");

    st1.attack(ct1.getName());
    st1.takeDamage(19);
    st1.beRepaired(43);
    ct1.attack(st1.getName());
    st1.takeDamage(22);
    st1.guardGate();
    return (0);
}
