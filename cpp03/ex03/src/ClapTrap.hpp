/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:08:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:08:28 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

using std::string;

class ClapTrap
{
protected:
    string	_name;
    int		hitPoints;
	int		energyPoints;
	int		attackDamage;
public:
    ClapTrap();
    ClapTrap(string name);
    ~ClapTrap();
    ClapTrap(ClapTrap &src);
    ClapTrap& operator=(ClapTrap& rhs);

	void	attack(const string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
    string  getName(void);
};



#endif