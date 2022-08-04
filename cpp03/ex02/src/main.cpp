/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:33:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/15 10:21:47 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap A("A");
	ClapTrap C(A);
	FragTrap B("B");
	cout << B.getName() << endl;
	B.highFivesGuys();
	FragTrap D(B);

	ClapTrap F("F");
	F = A;
	FragTrap E("E");
	E = B;
	return (0);
}