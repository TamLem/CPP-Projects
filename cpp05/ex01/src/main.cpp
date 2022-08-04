/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:22:45 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/04 20:21:32 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

using std::cout;
using std::string;
using std::endl;

int main(void)
{
	Bureaucrat A("crap1", 60);
	Form F("Form A");
	cout << F << endl;
	A.signForm(F);
	return (0);
}