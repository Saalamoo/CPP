/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:11 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 14:45:12 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = name;
	this->hitpoints = 100;
	this->attdmg = 30;
	this->energypoints = 100;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitpoints = 100;
	this->attdmg = 30;
	this->energypoints = 100;
	std::cout << "FragTrap " << name << " is called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &trap) : ClapTrap()
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = trap;
}

FragTrap& FragTrap::operator=(const FragTrap& trap)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->hitpoints = trap.hitpoints;
	this->name = trap.name;
	this->energypoints = trap.energypoints;
	this->attdmg = trap.attdmg;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " high fives everybody" << std::endl;
}