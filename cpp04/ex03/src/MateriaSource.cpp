/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:33:11 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/02 12:01:42 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SOURCE_HPP__
#define __MATERIA_SOURCE_HPP__

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_count = 0;
	for (size_t i = 0; i < 4; i++)
	{
		_templates[i] = NULL;
	}
	std::cout << "\e[0;33mDefault Constructor MateriaSource\e[0m" << std::endl;
}

MateriaSource::~MateriaSource() 
{
	for (size_t i = 0; i < 4; i++)
	{
		delete _templates[i];
	}
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource &assign)
{
	this->_count = assign._count;
	for (int i = 0; i < 4; i++)
	{
		_templates[i] = assign._templates[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_templates[i] == NULL)
		{
			_templates[i] = materia;
			break ;
 		}
		
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_templates[i] && _templates[i]->getType() == type)
			return (_templates[i]->clone());
	}
	return (0);
}

void MateriaSource::deleteMaterias()
{
	for (size_t i = 0; i < 4; i++)
	{
		delete _templates[i];
	}
	
}

#endif