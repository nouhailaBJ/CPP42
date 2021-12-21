#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;
    int i = 0;

    if (N <= 0)
        return (NULL);
    zombies = new Zombie[N];
    while (i < N)
    {
        Zombie *z_new = new Zombie(name);
        zombies[i] = *z_new;
        i++;
    }
    return (zombies);
}