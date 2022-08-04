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

#include <iostream>
#include "wrongCat.hpp"

using std::string;
using std::cout;
using std::endl;

WrongCat::WrongCat(/* args */)
{
	this->_type = "WrongCat";
    cout << "WrongCat constructed "<< endl;
}

WrongCat::~WrongCat()
{
    cout << "WrongCat Distructed "<< endl;
}

void	WrongCat::makeSound() const
{
	cout << "Miiiiiawww" << endl;
}

string  WrongCat::getType()  const
{
	return (this->_type);
}
