/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:26:31 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/10 16:11:03 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

using std::ostream;
using std::ofstream;

class Fixed
{
private:
    int value;
    static const int nFracBits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &src);
    ~Fixed();

    Fixed& operator=(const Fixed& rhs);

	int     getRawBits(void) const;
	void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

ostream& operator<<(ostream& out, const Fixed& fixed);
ofstream& operator<<(ofstream &out, const Fixed &fixed);
bool operator>(const Fixed &a, const Fixed &b);
bool operator>=(const Fixed &lhs, const Fixed &rhs);
bool operator<(const Fixed &lhs, const Fixed &rhs);
bool operator<=(const Fixed &lhs, const Fixed &rhs);
bool operator==(const Fixed &lhs, const Fixed &rhs);
bool operator!=(const Fixed &lhs, const Fixed &rhs);
Fixed &operator+=(Fixed &lhs, const Fixed &rhs);
Fixed &operator-=(Fixed &lhs, const Fixed &rhs);
Fixed operator+(Fixed lhs, const Fixed &rhs);
Fixed operator-(Fixed lhs, const Fixed &rhs);
Fixed operator*(Fixed lhs, const Fixed &rhs);
Fixed operator/(Fixed lhs, const Fixed &rhs);
Fixed &operator++(Fixed &lhs);
Fixed operator++(Fixed &lhs, int);
Fixed &operator--(Fixed &lhs);
Fixed operator--(Fixed &lhs, int);

#endif