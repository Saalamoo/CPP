#include "Sed.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cerr << "Error: Wrong number of args." << std::endl;
        return(1);
    }
    else
    {
        Sed sed;
        sed.replace(av[1], av[2], av[3]);
    }
    return(0);
}