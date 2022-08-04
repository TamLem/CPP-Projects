/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:21:08 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/02 11:50:55 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

using std::string;
using std::cout;
using std::endl;

// Constructors
Ice::Ice()
{
	_type = "ice";
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(std::string type)
{
	_type = type;
	std::cout << "\e[0;33mFields Constructor called of Ice\e[0m" << std::endl;
}


// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string Ice::getType() const
{
	return _type;
}

//Methods
AMateria* Ice::clone() const
{
	return(new Ice())
;}

void Ice::use(ICharacter& target)
{
	cout << "* shoots a ice bolt at " + target.getName() + " *" << endl;
	
}

