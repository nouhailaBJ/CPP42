#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct1("nouhaila");
    ClapTrap ct2("baghou");

    std::cout << "Hit points is : " << ct1.getHitPoints() << std::endl;
    std::cout << "Energy Points is : " << ct1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage is : " << ct1.getAttackDamage() << std::endl;

    ct1.attack(ct2.getName());
    ct1.takeDamage(19);
    ct1.beRepaired(43);
    return (0);
}