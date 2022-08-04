#include "DiamondTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

DiamondTrap::DiamondTrap(string name)
{
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    cout << "DiamondTrap " << this->_name << " Constructed" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	cout << "DiamondTrap Copy " << src._name << endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &rhs)
{
	cout << "DiamondTrap Assignment" << endl;
    ClapTrap::_name = rhs._name + "_clap_trap";
    this->_name = rhs._name;
    this->attackDamage = rhs.attackDamage;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << this->_name << " Distructed" << endl;
}

void    DiamondTrap::whoAmI()
{
    cout << "My name: " + this->_name + " My grand father's name: " + ClapTrap::_name << endl;
}

int     DiamondTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

int     DiamondTrap::getHitPoints()
{
    return (this->hitPoints);
}

