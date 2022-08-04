/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:22:45 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/06 12:11:20 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

using std::cout;
using std::string;
using std::endl;

int main(void)
{
	Bureaucrat resident("resident",  20);
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("r form", "Bender");
	cout << rrf->getName() << std::endl;
	resident.signForm(*rrf);
	delete rrf;
	return (0);
}