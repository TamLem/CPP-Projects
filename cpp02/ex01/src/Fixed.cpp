/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:27:43 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/21 20:37:07 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cmath>
#include "Fixed.hpp"

using std::cout;
using std::endl;
using std::ostream;
using std::ofstream;

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    this->value = 0;
}

Fixed::Fixed(const int value) : value(value * (1 << Fixed::nFracBits))
{
    cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float value): value (roundf(value * (1 << Fixed::nFracBits)))
{
    cout << "Float constructor called" << endl;
}

Fixed::Fixed(const Fixed& src)
{
    cout << "Copy constructor called" << endl;
    this->value = src.getRawBits();
}

Fixed::~Fixed()
{
    cout << "Distructor called" << endl;
}

/* Operator Overloads */ 

Fixed& Fixed::operator=(const Fixed& rhs)
{
    cout << "Copy assignment operator called" << endl;
    this->value = rhs.getRawBits();
    return (*this);
}

ostream& operator<<(ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

/*  Member functions */

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

float Fixed::toFloat(void) const
{
    return (float(this->value) / (1 << Fixed::nFracBits));
}
int Fixed::toInt(void) const
{
    return (roundf(this->value / (1 << Fixed::nFracBits)));
}