/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:48:14 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 12:15:54 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce (void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
