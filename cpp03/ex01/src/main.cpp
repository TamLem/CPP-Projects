/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:33:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:00:18 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap A("A");
	ClapTrap C(A);
	ScavTrap B("B");
	cout << B.getName() << endl;
	B.guardGate();
	B.attack("A");
	ScavTrap D(B);

	ClapTrap F("F");
	F = A;
	ScavTrap E("E");
	E = B;
	return (0);
}