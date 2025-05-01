#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public:
        Cat();
        ~Cat();
        Cat(const Cat& animal);
        Cat& operator=(const Cat& animal);
        
        void makeSound() const;
};

#endif