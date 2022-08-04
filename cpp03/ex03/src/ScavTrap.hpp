/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:44:06 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:12:42 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

using std::string;

class ScavTrap: virtual public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(string name);
	ScavTrap(ScavTrap& src);
	ScavTrap& operator=(ScavTrap&	rhs);
	~ScavTrap();

	void attack(const string& target);
	void guardGate();
};


#endif