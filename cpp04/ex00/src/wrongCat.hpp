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

#ifndef __WRONGCAT_HPP
#define __WRONGCAT_HPP

#include <iostream>
#include "wrongAnimal.hpp"

using std::string;
using std::cout;
using std::endl;

class WrongCat: public WrongAnimal
{
private:
	string  _type;
public:
	WrongCat(/* args */);
	~WrongCat();

	void	makeSound() const;
	string  getType()  const;
};

#endif