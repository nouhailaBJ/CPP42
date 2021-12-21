#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap ft1("rayan");
    FragTrap ft2("nouhaila");

    ft1.attack(ft2.getName());
    ft1.highFivesGuys();
    return (0);
}