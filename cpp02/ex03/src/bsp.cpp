/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:13:23 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/11 12:39:37 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area(const Point& p1, const Point& p2, const Point& p3)
{
    float area;
    area = (p1.getX() * (p2.getY() - p3.getY()) 
            + p2.getX() * (p3.getY() - p1.getY())
            + p3.getX() * (p1.getY() - p2.getY())) / 2;
    if (area < 0)
        area *= -1;
    return (area);
}

bool 
    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaBig, area1, area2, area3;

    areaBig = area(a, b, c);
    area1 = area(a, b, point);
    area2 = area(a, point, c);
    area3 = area(point, b, c);

    //exclude edge or vertex points
    if ((areaBig == 0 || area1 == 0 || area2  == 0 || area3 == 0) 
        || (areaBig != area1 + area2 + area3))
        return (false);    

    return (true);
}
