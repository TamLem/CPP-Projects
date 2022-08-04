/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/27 15:41:28 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
private:
    string  _type;
public:
    Animal(/* args */);
    virtual ~Animal();

    virtual void makeSound() const;
    virtual string getType() const;
};

#endif