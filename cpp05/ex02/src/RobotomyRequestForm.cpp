/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:47:58 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/05 19:16:45 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
# include <string>
# include <cstdlib>

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy", 72, 45), _target(target)
{
	std::cout << "\e[0;33m RobotomyRequestForm Constructor called \e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy): _target(copy._target)
{
	std::cout << "\e[0;33mFields Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int rd;
	if (this->getIsSigned() == false || executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	std::cout << "Drrrrrrrr " << this->_target <<((rd = rand()) % 2 == 0 ? " has been robotomized\n" : " hasn't been robotomized\n" );
}
