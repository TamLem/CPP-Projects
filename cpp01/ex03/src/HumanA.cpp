/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:28:12 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 21:42:07 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->_name = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " 
        << this->_weapon->getType() << std::endl;
}