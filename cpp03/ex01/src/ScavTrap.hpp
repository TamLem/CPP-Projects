/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:44:06 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/14 21:58:03 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

using std::string;

class ScavTrap: public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(string name);
	ScavTrap(ScavTrap& src);
	ScavTrap& operator=(ScavTrap&	rhs);
	~ScavTrap();

	void attack(const string& target);
	void guardGate();
};


#endif