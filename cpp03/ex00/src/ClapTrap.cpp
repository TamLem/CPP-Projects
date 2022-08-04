/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:16:58 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/14 21:38:13 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name) : _name(name) , hitPoints(10), energyPoints(10), attackDamage(10)
{
	cout << "ClapTrap " << this->_name << " Constructed" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap " << this->_name << " Distructed" << endl;
}

ClapTrap::ClapTrap(ClapTrap &src) : _name(src._name), hitPoints(src.hitPoints), energyPoints(src.energyPoints), attackDamage(src.attackDamage)
{
	cout << "ClapTrap " << this->_name << " Constructed" << endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void ClapTrap::attack(const string &target)
{
	target.c_str();
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
		<<  this->attackDamage << " points of damage!" << endl;
	}
	else
		cout << "ClapTrap " << this->_name << " is wasted" << endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->energyPoints -= amount;
	if (this->energyPoints < 0)
		this->energyPoints = 0;
	cout << this->_name << " has " << this->energyPoints << " energy points." << endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		this->energyPoints += amount - 1;
		cout << this->_name << " has " << this->energyPoints << " energy points." << endl;	
	}
	else
		cout << "ClapTrap " <<this->_name << " is wasted" << endl;
}
