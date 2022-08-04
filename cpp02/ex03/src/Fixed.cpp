/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:27:43 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/21 20:33:10 by tlemma           ###   ########.fr       */
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
    this->value = 0;
}

Fixed::Fixed(const int value) : value(value * (1 << Fixed::nFracBits))
{}

Fixed::Fixed(const float value): value (roundf(value * (1 << Fixed::nFracBits)))
{}

Fixed::Fixed(const Fixed& src)
{
    this->value = src.getRawBits();
}

Fixed::~Fixed()
{
}

/*  Member functions */

int Fixed::getRawBits(void) const
{
    return (this->value);
}
void Fixed::setRawBits(int const raw)
{
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

/*  Operator Overloads */ 

ostream& operator<<(ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    this->value = rhs.getRawBits();
    return (*this);
}

/** Logical Comparisons **/

bool operator>(const Fixed& lhs, const Fixed& rhs)
{
	return(lhs.toFloat() > rhs.toFloat());
}

bool operator>=(const Fixed &lhs, const Fixed &rhs)
{
    return (lhs.toFloat() >= rhs.toFloat());
}

bool operator<(const Fixed &lhs, const Fixed &rhs)
{
    return (lhs.toFloat() < rhs.toFloat());
}

bool operator<=(const Fixed &lhs, const Fixed &rhs)
{
    return (lhs.toFloat() <= rhs.toFloat());
}

bool operator==(const Fixed &lhs, const Fixed &rhs)
{
    return (lhs.toFloat() == rhs.toFloat());
}

bool operator!=(const Fixed &lhs, const Fixed &rhs)
{
    return (lhs.toFloat() != rhs.toFloat());
}

/** Arthimetic Assignment **/

Fixed& operator+=(Fixed& lhs, const Fixed& rhs)
{
    lhs.setRawBits(lhs.getRawBits() + rhs.getRawBits());
    return (lhs);
}

Fixed &operator-=(Fixed &lhs, const Fixed &rhs)
{
    lhs.setRawBits(lhs.getRawBits() - rhs.getRawBits());
    return (lhs);
}

/** Arthimetic **/

Fixed operator+(Fixed lhs, const Fixed& rhs)
{
    lhs += rhs;
    return(lhs);
}

Fixed operator-(Fixed lhs, const Fixed &rhs)
{
    lhs -= rhs;
    return (lhs);
}

Fixed operator*(Fixed lhs, const Fixed &rhs)
{
    lhs.setRawBits((lhs.getRawBits() * rhs.getRawBits()) / 256);
    return (lhs);
}

Fixed operator/(Fixed lhs, const Fixed &rhs)
{
    lhs.setRawBits((lhs.getRawBits() / rhs.getRawBits()) * 256);
    return (lhs);
}

/** Increment and Decrement Operators **/

Fixed& operator++(Fixed& lhs)
{
    lhs.setRawBits(lhs.getRawBits() + 1);
    return (lhs);
}

Fixed operator++(Fixed &lhs, int)
{
    Fixed   old;

    old = lhs;
    lhs.setRawBits(lhs.getRawBits() + 1);
    return (old);
}

Fixed &operator--(Fixed &lhs)
{
    lhs.setRawBits(lhs.getRawBits() - 1);
    return (lhs);
}

Fixed operator--(Fixed &lhs, int)
{
    Fixed old;

    old = lhs;
    lhs.setRawBits(lhs.getRawBits() - 1);
    return (old);
}

/** min-max operators **/
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}