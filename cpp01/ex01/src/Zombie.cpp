/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:49:57 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 14:38:38 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "iomanip"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Z constructed" << std::endl;
}

Zombie::~Zombie()
{
    
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": Braaaaaazzz..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}