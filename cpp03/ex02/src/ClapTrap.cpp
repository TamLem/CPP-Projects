/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:16:58 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:02:51 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name): _name(name)
{
	cout << "ClapTrap " << this->_name << " Constructed" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap " << this->_name << " Distructed" << endl;
}

ClapTrap::ClapTrap(ClapTrap &src) : _name(src._name), hitPoints(src.hitPoints), energyPoints(src.energyPoints), attackDamage(src.attackDamage)
{
	cout << "ClapTrap " << this->_name << " Constructed by copy" << endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &rhs)
{
	cout << "ClapTrap " << this->_name << " assigned from " << rhs._name << endl;
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

string	ClapTrap::getName(void)
{
	return (this->_name);
}