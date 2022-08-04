/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:31:39 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 20:13:05 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}