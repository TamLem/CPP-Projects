/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:16:46 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:56:08 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
    DiamondTrap A("A");
    cout << "A energy points " << A.getEnergyPoints() << endl;
    cout << "A hit points " << A.getHitPoints() << endl;
    ScavTrap B("scav B");
    A.attack("B");
    DiamondTrap C(A);
    C.whoAmI();
    DiamondTrap D("D");
    D = A;
    D.whoAmI();
	return (0);
}