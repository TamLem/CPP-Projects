/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:36:50 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/31 10:59:55 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

using std::cout;
using std::endl;

Base *generate(void)
{
	if (rand() % 3 == 0)
		return (new A());
	if (rand() % 3 == 1)
		return (new B());
	return (new C());
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != 0)
		cout << "class type A" << endl;
	if (dynamic_cast<B *>(p) != 0)
		cout << "class type B" << endl;
	if (dynamic_cast<C *>(p) != 0)
		cout << "class type C" << endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		cout << "class type A " << &a << endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		cout << "class type B " << &b <<endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		cout << "class type C " << &c << endl;
	}
	catch(const std::exception& e)
	{
	}
}
	

int	main(void)
{
	identify(generate());
	identify(generate());
	identify(generate());
	identify(*generate());
	identify(*generate());
	identify(*generate());
	identify(*generate());
	return 0;
}