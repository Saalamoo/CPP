#include "Zombie.hpp"

int main()
{
    std::string name;

    std::cout << "Zombie in creation..." << std::endl;
    // // std::cout << "name :" << std::flush;
    std::cin >> name;
    Zombie myzombie(name);
    // myzombie.announce();

    std::cout << "New Zombie in creation..." << std::endl;
    std::cin >> name;
    // std::cout << "name :" << std::flush;
    Zombie *myzombie2 = newZombie(name);
    myzombie2->announce();
    delete myzombie2;

    std::cout << "randomChump created..." << std::endl;
    randomChump("randomChump");
    return(0);
}