/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:37:56 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/02 11:43:42 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE__
# define __MATERIASOURCE__

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria 	*_templates[4];
	int				_count;
public:
	MateriaSource(void);
	virtual ~MateriaSource();
	MateriaSource(MateriaSource &copy);
	MateriaSource &operator=(MateriaSource &assign);
	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);
	void deleteMaterias();

};

#endif