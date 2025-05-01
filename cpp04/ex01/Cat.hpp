#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
        Brain* brain;
public:
        Cat();
        ~Cat();
        Cat(const Cat& animal);
        Cat& operator=(const Cat& animal);
        
        void makeSound() const;
        Brain* getBrain() const;
};

#endif