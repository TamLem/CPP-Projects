/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:27:43 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/10 10:46:59 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    this->value = 0;
}


Fixed::Fixed(Fixed& src)
{
    cout << "Copy constructor called" << endl;
    this->value = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed& rhs)
{
    cout << "Copy assignment operator called" << endl;
    this->value = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    cout << "Distructor called" << endl;}

int Fixed::getRawBits(void) const
{
    cout << "getRawBit member function called" << endl;
    return (this->value);
}
void Fixed::setRawBits(int const raw)
{
    cout << "setRawBit member function called" << endl;
    this->value = raw;
}