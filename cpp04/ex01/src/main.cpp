/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:09:22 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 15:26:15 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i=0; i < 10; i++)
		delete animals[i];

	return(0);
}