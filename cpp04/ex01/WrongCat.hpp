#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& animal);
        WrongCat& operator=(const WrongCat& animal);
        
        void makeSound() const;
};

#endif