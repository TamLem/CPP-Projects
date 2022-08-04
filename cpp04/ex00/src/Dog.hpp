/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/27 15:45:11 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Dog: public Animal
{
private:
    string  _type;
public:
    Dog(/* args */);
    ~Dog();
    Dog(Dog &copy);

    Dog& operator=(const Dog &assign);
    void makeSound() const;
    string getType() const;
};

#endif