/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:44:51 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 14:44:52 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = name;
	this->hitpoints = 100;
	this->attdmg = 20;
	this->energypoints = 50;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitpoints = 100;
	this->attdmg = 20;
	this->energypoints = 50;

	std::cout << "ScavTrap " << name << " is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &trap) : ClapTrap()
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = trap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& trap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->hitpoints = trap.hitpoints;
	this->name = trap.name;
	this->energypoints = trap.energypoints;
	this->attdmg = trap.attdmg;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energypoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is out of energy" << std::endl;
	}
    std::cout << "ScavTrap " << name << " attacks " << target << " at range, causing " << attdmg << " points of damage!" << std::endl;
    energypoints -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name + " is now in Gate keeper mode" << std::endl;
}