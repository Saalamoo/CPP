/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:44:57 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 14:44:58 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hitpoints(10), energypoints(10), attdmg(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitpoints(10), energypoints(10), attdmg(0)
{
	std::cout << "ClapTrap " << name << " is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = trap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->hitpoints = trap.hitpoints;
	this->name = trap.name;
	this->energypoints = trap.energypoints;
	this->attdmg = trap.attdmg;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energypoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is out of energy" << std::endl;
	}
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attdmg << " points of damage!" << std::endl;
    energypoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (energypoints <= amount)
	{
        std::cout << "ClapTrap " << name << " is out of energy" << std::endl;
    }
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points" << std::endl;
	energypoints -= 1;
    hitpoints += amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints <= amount)
	{
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
	}
    std::cout << "ClapTrap " << name << " takes " << amount << " damage" << std::endl;
	hitpoints -= amount;
}