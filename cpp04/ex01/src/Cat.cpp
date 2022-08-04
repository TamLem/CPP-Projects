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
#include "Cat.hpp"

using std::string;
using std::cout;
using std::endl;

Cat::Cat(/* args */)
{
	this->_type = "cat";
	this->brain = new Brain();
    cout << "Cat constructed "<< endl;
}

Cat::~Cat()
{
	delete this->brain;
    cout << "Cat Distructed "<< endl;
}

Cat::Cat(Cat &copy)
{
	(*this) = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat& Cat::operator=(const Cat &assign)
{
	this->_type = assign._type;
	this->brain = new Brain();;
	*(this->brain) = *(assign.brain);
	std::cout << "\e[0;33mFields Constructor called of Cat\e[0m" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	cout << "Miiiiiawww" << endl;
}

string  Cat::getType()  const
{
	return (this->_type);
}
