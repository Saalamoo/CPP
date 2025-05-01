#include "Zombie.hpp"

int main()
{
    std::string name;
    std::cout << "Zombie in creation .." << std::endl;
    std::cin >> name;
    Zombie *Zeezombie = zombieHorde(3, name);
    for(int i = 0; i < 3; i++)
    {
        Zeezombie[i].announce();
    }
    delete [] Zeezombie;
    return(0);
}