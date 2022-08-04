/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:42:50 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:35:18 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

FragTrap::FragTrap()
{
	this->hitPoints = 100;
	this->attackDamage = 30;
	cout << "FragTrap constructed" << endl;
}

FragTrap::FragTrap(string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	cout << "FragTrap " + this->_name + " Constructed" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap Distructed" << endl;
}

FragTrap::FragTrap(FragTrap &src): ClapTrap(src)
{
}

FragTrap &FragTrap::operator=(FragTrap &rhs)
{
	ClapTrap::operator=(rhs);
	cout << "FragTrap Assignment" << endl;
	(void)rhs;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	cout << "High Five ?" << endl;
}
