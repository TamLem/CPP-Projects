/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:47:58 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/06 11:30:13 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <fstream>
# include <istream>
# include <string>

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137), _target(target) 
{
	std::cout << "\e[0;33m ShrubberyCreationForm Constructor called \e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy): _target(copy._target)
{
	std::cout << "\e[0;33mFields Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	file;
	std::string		fileName;

	if (this->getIsSigned() == false || executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	fileName = this->_target + ("_shrubbery");
	file.open(fileName);
	if (!file)
		return ; //add exceeption handling
	file << "\n"
		<< "           _-_			\n"	
		<< "        /~~   ~~\\		\n"	
		<< "     /~~         ~~\\	\n"	
		<< "    {               }	\n"	
		<< "     \\  _-     -_  /	\n"	
		<< "       ~  \\ //  ~		\n"	
		<< "    _- -   | | _- _		\n"	
		<< "      _ -  | |   -_		\n"	
		<< "          // \\			\n";
	file.close();
}
