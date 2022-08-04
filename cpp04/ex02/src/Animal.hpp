/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 15:57:59 by tlemma           ###   ########.fr       */
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

    virtual void makeSound() const = 0;
    virtual string getType() const = 0;
};

#endif