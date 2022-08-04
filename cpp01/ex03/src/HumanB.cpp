/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:36:54 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 20:02:14 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " 
        << this->_weapon->getType() << std::endl;
}