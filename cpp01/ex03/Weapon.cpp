#include "Weapon.hpp"

Weapon::Weapon(void)
{
    
}

Weapon::Weapon(std::string str) : type(str)
{
}

Weapon::~Weapon(void)
{}

const std::string& Weapon::getType() 
{
    return (this->type);
}

void Weapon::setType(std::string str)
{
   type = str;
}