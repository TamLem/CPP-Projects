/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:26:31 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/10 10:46:31 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
    int value;
    static const int nFracBits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(Fixed &src);
    ~Fixed();

    Fixed& operator=(Fixed& rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif