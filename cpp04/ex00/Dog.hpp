#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
public:
        Dog();
        ~Dog();
        Dog(const Dog& animal);
        Dog& operator=(const Dog& animal);
        
        void makeSound() const;
};

#endif