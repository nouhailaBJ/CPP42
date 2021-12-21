#include "HumanB.hpp"

HumanB::HumanB(std::string n_name) : weapon(NULL),  name(n_name)
{

}

HumanB::HumanB(std::string n_name, Weapon *wp) : weapon(wp), name(n_name)
{

}

HumanB::~HumanB(void)
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &n_wp)
{
    this->weapon = &n_wp;
}