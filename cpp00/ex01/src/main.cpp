/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:33:27 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/04 15:26:05 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
	PhoneBook	phoneBook;
	std::string	cmd;

	cmd = "";
	while (cmd.compare("EXIT") != 0)
	{
		std::cout << std::endl << "Your phone book has " << phoneBook.getTotal() 
			<< " contacts."	<< "please type ADD, SEARCH, or EXIT" << std::endl;
		std::cout << "> ";
		std::cin >> cmd;

		if (cmd.compare("ADD") == 0)
			phoneBook.createContact();
		if (cmd.compare("SEARCH") == 0)
			phoneBook.searchContact();
	}
	
	return (0);
}