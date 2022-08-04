/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:44:06 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/15 10:21:07 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FragTrap_HPP__
#define __FragTrap_HPP__

#include "ClapTrap.hpp"

using std::string;

class FragTrap: public ClapTrap
{
private:
	/* data */
public:
	FragTrap(string name);
	FragTrap(FragTrap& src);
	FragTrap& operator=(FragTrap&	rhs);
	~FragTrap();

	void attack(const string& target);
	void highFivesGuys(void);
};


#endif