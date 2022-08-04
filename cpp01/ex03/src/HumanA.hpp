/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:33:36 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 20:05:49 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP
#define __HUMANA_HPP

#include "iostream"
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon*     _weapon;    
    /* data */
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void);
};

#endif