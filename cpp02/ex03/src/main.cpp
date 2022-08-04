/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:29:15 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/11 11:35:50 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    Point a(-2, 0);
    Point b(2, 0);
    Point c(0, 2);
    Point test1(1, 0);
    Point test2(2, 0);
    Point test3(0, 1);
    Point test4(0, -0.01f);

    cout << "test1: " << bsp(a, b, c, test1)  << endl;
    cout << "test2: " << bsp(a, b, c, test2) << endl;
    cout << "test3: " << bsp(a, b, c, test3) << endl;
    cout << "test4: " << bsp(a, b, c, test4) << endl;

    return (0);
}