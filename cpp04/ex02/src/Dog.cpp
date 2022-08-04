/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/27 15:40:30 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

using std::string;
using std::cout;
using std::endl;

Dog::Dog()
{
    this->_type = "Dog";
    this->brain = new Brain();
    cout << "Dog constructed "<< endl;
}

Dog::~Dog()
{
    delete this->brain;
    cout << "Dog Distructed "<< endl;
}

Dog::Dog(Dog &copy)
{
    (*this) = copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog& Dog::operator=(const Dog &assign)
{
    this->_type = assign._type;
	this->brain = new Brain();;
	*(this->brain) = *(assign.brain);
	std::cout << "\e[0;33mFields Constructor called of Dog\e[0m" << std::endl;
	return (*this);
}

void    Dog::makeSound() const
{
    cout << "RUF ! RUF ! RUF" << endl;
}

string  Dog::getType() const
{
    return (this->_type);
}
