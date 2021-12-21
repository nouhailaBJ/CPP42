#include "HumanA.hpp"


HumanA::HumanA(std::string n_name, Weapon &w) : wp(w), name(n_name) 
{

}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with his " << wp.getType() << "\n";
}
