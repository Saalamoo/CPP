#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead.." << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::NameSet( std::string name )
{
    this->name = name;
}