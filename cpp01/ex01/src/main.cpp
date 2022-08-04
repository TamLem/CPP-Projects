/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:41:42 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 15:15:39 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	std::cout << "Hello world!" << std::endl;
	zombie = zombieHorde(3, "Foo");	
	delete[] zombie;
	return (0);
}

