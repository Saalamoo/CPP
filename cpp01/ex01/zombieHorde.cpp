#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zeezombie = new Zombie[N];
    for(int i = 0; i < N ; i++)
    {
        zeezombie[i].NameSet(name);
    }
    return (zeezombie);
}