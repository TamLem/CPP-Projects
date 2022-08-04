/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:42:50 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 13:55:20 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ScavTrap::ScavTrap(string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	cout << "ScavTrap " + this->_name + " Constructed" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap Distructed" << endl;
}

ScavTrap::ScavTrap(ScavTrap &src): ClapTrap(src)
{
}

ScavTrap &ScavTrap::operator=(ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);
	cout << "Scavtrap Assignment" << endl;
	(void)rhs;
	return (*this);
}

void ScavTrap::attack(const string &target)
{
	cout << "ScavTrap attacks " << target << endl;
}
void ScavTrap::guardGate()
{
	cout << "ScavTrap is a gate keeper." << endl;
}
