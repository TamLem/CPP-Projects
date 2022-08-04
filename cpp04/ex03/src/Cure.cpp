/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:01:03 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/02 11:51:08 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

using std::string;
using std::cout;
using std::endl;

// Constructors
Cure::Cure()
{
	_type = "cure";
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(std::string type)
{
	_type = type;
	std::cout << "\e[0;33mFields Constructor called of Cure\e[0m" << std::endl;
}


// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string Cure::getType() const
{
	return this->_type;
}

//Methods

AMateria* Cure::clone() const
{
	return (new Cure());
}


void Cure::use(ICharacter& target)
{
	cout << "* heals " + target.getName() +"'s wounds *" << endl;
}
