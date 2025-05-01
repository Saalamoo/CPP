/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:44:18 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 14:44:19 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ScavTrap scavtrap("Sed");

	scavtrap.attack("Bad Guy");

    scavtrap.guardGate();

    return 0;
}