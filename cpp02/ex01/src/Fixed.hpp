/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:26:31 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/10 11:19:30 by tlemma           ###   ########.fr       */
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
    // ostream& operator<<(Fixed &rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

ostream& operator<<(ostream& out, const Fixed& fixed);
ofstream& operator<<(ofstream &out, const Fixed &fixed);


#endif