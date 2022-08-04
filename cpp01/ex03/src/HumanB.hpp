/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:35:33 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 19:43:23 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP
#define __HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;    
    /* data */
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& weapon);
    void attack(void);
};

#endif

