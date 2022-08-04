/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:21:13 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/02 11:24:46 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		Ice(std::string type);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		
		// Getters / Setters
		std::string getType() const;

		//Methods
		virtual AMateria* clone() const;

		virtual void use(ICharacter& target);
};

#endif