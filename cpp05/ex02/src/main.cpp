/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:22:45 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/05 19:12:39 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

using std::cout;
using std::string;
using std::endl;

int main(void)
{
	Bureaucrat A("crap1", 1);
	ShrubberyCreationForm F("form28b");
	PresidentialPardonForm P("target1");
	RobotomyRequestForm R("target2");

	A.signForm(F);
	A.signForm(P);
	A.signForm(R);

	A.executeForm(F);
	A.executeForm(P);
	A.executeForm(R);

	return (0);
}