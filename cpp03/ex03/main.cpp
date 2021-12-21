#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt1("Nouhaila");
    DiamondTrap dt2("rayan");

    dt1.attack(dt2.getName());
    dt1.whoAmI();
    dt2.whoAmI();
    return (0);
}