/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:14:01 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/27 15:17:12 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

using std::string;
using std::cout;
using std::endl;

// Constructors
Character::Character(std::string name): _name(name)
{
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_dropped[i] = NULL;
	}
	
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	(*this) = copy;
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}


// Destructor
Character::~Character()
{
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
	deleteDropped();
}


// Operators
Character & Character::operator=(const Character &assign)
{
	this->_name = assign._name;
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = assign._inventory[i];
		}
	}
	
	return *this;
}

//Methods
std::string const & Character::getName() const
{
	return (this->_name);
}
void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::deleteDropped()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_dropped[i] != NULL)
			delete _dropped[i];
	}
	
}

void Character::unequip(int idx)
{
	if (_dropped[3] == NULL)
	{
		if (idx < 4 && idx >= 0	&& _inventory[idx])
		{
			_dropped[idx] = _inventory[idx];
			_inventory[idx] = NULL;
		}
	}
	else
		cout << "can't drop anymore" << endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx	 >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}