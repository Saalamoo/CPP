/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:46:11 by saalamoo          #+#    #+#             */
/*   Updated: 2023/12/01 14:46:12 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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