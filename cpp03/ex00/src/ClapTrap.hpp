/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:08:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/14 21:27:15 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

using std::string;

class ClapTrap
{
private:
    string	_name;
    int		hitPoints;
	int		energyPoints;
	int		attackDamage;
public:
    ClapTrap(string name);
    ~ClapTrap();
    ClapTrap(ClapTrap &src);
    ClapTrap& operator=(ClapTrap& rhs);

	void	attack(const string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};



#endif