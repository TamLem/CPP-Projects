/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:44:06 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/25 14:22:06 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FragTrap_HPP__
#define __FragTrap_HPP__

#include "ClapTrap.hpp"

using std::string;

class FragTrap: virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(string name);
	FragTrap(FragTrap& src);
	FragTrap& operator=(FragTrap&	rhs);
	~FragTrap();

	void highFivesGuys(void);
};


#endif