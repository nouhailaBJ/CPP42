#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : _name(name)
{
    
}

Zombie::~Zombie(void)
{
    std::cout << "<" << _name << "> Good Night!\n";
}

void Zombie::announce(void)
{
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ...\n";
}
