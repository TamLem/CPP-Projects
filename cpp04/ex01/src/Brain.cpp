/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:09:32 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 15:18:01 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	(*this) = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(std::string ideas[])
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
	std::cout << "\e[0;33mFields Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = assign.getIdeas()[i];
	return *this;
}


// Getters / Setters
const std::string *Brain::getIdeas() const
{
	return _ideas;
}
