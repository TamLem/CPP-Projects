/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:38:44 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:44:57 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP__
#define __DIAMOND_TRAP__

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

using std::string;

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	string _name;
public:
	DiamondTrap(string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap &src);

	DiamondTrap &operator=(DiamondTrap &rhs);
	
	int	getEnergyPoints();
	int getHitPoints();
	void whoAmI();
};

#endif