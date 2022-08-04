/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:30:48 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 20:12:58 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType();
    void setType(std::string type);
};

#endif

