/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:47:58 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/05 17:57:57 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
# include <string>

// Constructors
PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential", 25, 5), _target(target) 
{
	std::cout << "\e[0;33m PresidentialPardonForm Constructor called \e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy): _target(copy._target)
{
	std::cout << "\e[0;33mFields Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false || executor.getGrade() > 20)
		throw Form::GradeTooLowException();
	std::cout << this->_target+ " has been pardoned by Zaphod Beeblebrox\n";
}
