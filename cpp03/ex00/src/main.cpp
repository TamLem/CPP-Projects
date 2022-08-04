/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:33:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/14 21:36:16 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap A("A");
	ClapTrap B("B");

	A.attack(string("B"));
	return (0);
}