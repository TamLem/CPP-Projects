/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 14:47:59 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "wrongAnimal.hpp"

using std::string;
using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(/* args */)
{
    this->_type = "WrongAnimal";
    cout << "WrongAnimal constructed "<< endl;
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal Distructed" << endl;
}

void    WrongAnimal::makeSound() const
{
    cout << "WrongAnimal sound" << endl;
}

string  WrongAnimal::getType() const
{
    return (this->_type);
}
