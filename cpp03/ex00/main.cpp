/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:44:08 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 17:20:21 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Bob");
    
    claptrap.attack("enemy");
    claptrap.beRepaired(5);
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	
	
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.attack("enemy");
	claptrap.beRepaired(5);
	
    return 0;
}