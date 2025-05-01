/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:44:54 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 14:44:55 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& trap);
		ScavTrap& operator=(const ScavTrap& trap);
		~ScavTrap();
		void attack(const std::string &target);
		void guardGate();
};

#endif