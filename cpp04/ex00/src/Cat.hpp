/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Cat.hpp											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tlemma <tlemma@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/04/25 17:26:49 by tlemma			#+#	#+#			 */
/*   Updated: 2022/04/26 14:10:42 by tlemma		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Cat: public Animal
{
private:
	string  _type;
public:
	Cat(/* args */);
	~Cat();
	Cat(Cat &copy);
	
	Cat &operator=(const Cat &assign);
	void	makeSound() const;
	string  getType()  const;
};

#endif