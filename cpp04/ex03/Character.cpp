#include "Character.hpp"

Character::Character(void)
{
	for (size_t i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	for (size_t i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::Character(const Character &toCopy) : name(toCopy.name)
{
	for (size_t i = 0; i < 4; i++)
	{
		inv[i] = NULL;
		if (toCopy.inv[i])
			inv[i] = toCopy.inv[i]->clone();
	}
}

Character	&Character::operator = (const Character &toCopy)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete(inv[i]);
		inv[i] = NULL;
		if (toCopy.inv[i])
			inv[i] = toCopy.inv[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
}

std::string	const & Character::getName() const
{
	return (name);
}

void		Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inv[i] == NULL)
		{
			inv[i] = m;
			return ;
		}
	}
}

void		Character::unequip(int idx)
{
	if (inv[idx] && (idx >= 0 && idx < 4))
		inv[idx] = NULL;
}

void		Character::use(int idx, ICharacter& target)
{
	if (inv[idx] && (idx >= 0 && idx < 4))
		inv[idx]->use(target);
}

