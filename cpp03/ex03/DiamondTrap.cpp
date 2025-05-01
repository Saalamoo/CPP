/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:03 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 15:00:19 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	this->name = name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->attdmg = FragTrap::attdmg;
	this->energypoints = ScavTrap::energypoints;

	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->name = name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->attdmg = FragTrap::attdmg;
	this->energypoints = ScavTrap::energypoints;

	std::cout << "DiamondTrap " << name << " is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->hitpoints = other.hitpoints;
	this->name = other.name + "_clap_name";
	this->energypoints = other.energypoints;
	this->attdmg = other.attdmg;
	return *this;
}

void DiamondTrap::whoAmI( void )
{
    std::cout << "I am a DiamondTrap named " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target); 
}
