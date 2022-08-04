/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:59:56 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/10 18:28:19 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point
{
private:
   Fixed x;
   Fixed y;
public:
    Point(/* args */);
    Point(float x, float y);
    Point(Point& src);
    ~Point();
    Point &operator=(Point &rhs);
    float getX(void) const;
    float getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif