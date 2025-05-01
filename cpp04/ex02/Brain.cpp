#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &brain)
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = brain.ideas[i];
		}
	}
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &brain)
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = brain.ideas[i];
		}
	}
	return (*this);
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i > 99)
        return ("");
    return (this->ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
    if (i < 0 || i > 99)
        return;
    this->ideas[i] = idea;
}