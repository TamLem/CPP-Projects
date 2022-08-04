/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:36:50 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/30 21:00:01 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	void		*tmp;
	uintptr_t	ret;

	tmp = ptr;
	ret = uintptr_t(ptr);
	return (ret);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ret;

	ret = NULL;
	ret = (Data *)(raw);
	return (ret);
}

int	main(void)
{
	Data *ptr = new Data();
	uintptr_t unint;

	unint = serialize(ptr);
	std::cout << unint << std::endl;
	ptr = deserialize(unint);
	std::cout << ptr->getValue() << std::endl;
	return 0;
}