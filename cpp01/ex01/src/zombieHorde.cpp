/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:45:52 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/31 15:03:11 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>


Zombie* zombieHorde( int N, std::string name)
{
    Zombie  *zombies;
    
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return(zombies);
}
