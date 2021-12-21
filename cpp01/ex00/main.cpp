#include "Zombie.hpp"
void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
    Zombie z1("Seoul");
    z1.announce();

    Zombie *z2;

    z2 = newZombie("tokyo");
    z2->announce();

    randomChump("Cairo");
    delete(z2);
    return (0);
}