/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:49 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/26 14:47:39 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP
#define __WRONGANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
private:
    string  _type;
public:
    WrongAnimal(/* args */);
    ~WrongAnimal();

    void makeSound() const;
    string getType() const;
};

#endif