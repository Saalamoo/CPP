#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie azombie(name);
    azombie.announce();
}