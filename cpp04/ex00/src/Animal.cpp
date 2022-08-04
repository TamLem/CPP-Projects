/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 14:37:08 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

Animal::Animal(/* args */)
{
    this->_type = "Animal";
    cout << "Animal constructed "<< endl;
}

Animal::~Animal()
{
    cout << "Animal Distructed" << endl;
}

void    Animal::makeSound() const
{
    cout << "Animal sound" << endl;
}

string  Animal::getType() const
{
    return (this->_type);
}
