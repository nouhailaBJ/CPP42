#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );
int main()
{
    Zombie *z;
    int n;

    n = 4;
    z = zombieHorde(n, "nouhaila");
    for(int i = 0; i < n; i++)
    {
        z[i].announce();
    }
    delete[] z;
    return (0);
}