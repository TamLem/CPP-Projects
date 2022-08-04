/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:05:25 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/27 15:41:52 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"

using std::string;
using std::cout;
using std::endl;

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    cout << " Wrong Polymorphism" << endl;
    
    /** Wrong Animal **/
    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << l->getType() << " " << std::endl;
    l->makeSound(); //will output the cat sound!
    beta->makeSound();

    delete meta;
    delete j;
    delete i;
    
    return 0;
}