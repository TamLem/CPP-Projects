/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:02:13 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/10 19:13:40 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::Point(float x, float y)
{
    this->x = Fixed(x);
    this->y = Fixed(y);
}

Point::Point(Point &src)
{
    this->x = src.x;
    this->y = src.y;
}

Point &Point::operator=(Point &rhs)
{
    this->x = rhs.x;
    this->y = rhs.y;
    return (*this);
}

Point::~Point()
{}

float Point::getX(void) const {
    return (this->x.toFloat());
}

float Point::getY(void) const {
    return (this->y.toFloat());
}

