/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:18:00 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/04 16:17:06 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>


PhoneBook::PhoneBook(void)
{
	this->_total = 0;
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::searchContact()
{
	int	index;

	this->printContacts();
	std::cout << "Insert index: ";
	std::cin >> index;
	if (index >= 0 && index < this->_total)
		this->printOne(index);
	else
		std::cout << "Index out of range." << std::endl;
}

static void	trim(std::string& str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
}

void printLine(std::string s1, std::string s2, std::string s3, std::string s4)
{
	trim(s1);
	trim(s2);
	trim(s3);
	trim(s4);
	std::cout << "|" << std::setw(10) << s1 << "|" << std::setw(10) << s2 
	<< "|" << std::setw(10) << s3 << "|" << std::setw(10) << s4 << "|" << std::endl;
}

void	PhoneBook::printContacts(void)
{
	std::string	header[4] = { "index", "First name", "Last name", "Nickname"};

	std::cout << std::endl;
	std::cout << "-------------- PHONE BOOK -------------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	printLine(header[0], header[1], header[2], header[3]);
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->_total; i++)
	{
		printLine(std::to_string(i), this->contacts[i].getFirstName(), 
			this->contacts[i].getLastName(), this->contacts[i].getNickName());
	}
}

void	PhoneBook::printOne(int index)
{
	this->contacts[index].printData();
}

static void	getInput(std::string& buf, std::string prompt)
{
	while (buf.empty())
	{
		std::cout << prompt;
		getline(std::cin, buf);
	}
}

void	PhoneBook::createContact()
{
	Contact *contact;

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	secret;
	std::string	tel;
	
	std::cin.ignore();
	getInput(firstName, "First name: ");
	getInput(lastName, "Last name: ");
	getInput(nickName, "Nickname: ");
	getInput(secret, "Secret key: ");
	getInput(tel, "Phone no: ");

	contact = &(this->contacts[this->_index]);
	contact->setData(firstName, lastName, nickName, secret, tel);
	if (this->_total < 8)
		this->_total++;
	this->_index = ++this->_index % 8;
}

void PhoneBook::setTotal(void)
{
	this->_total++;
}
int	PhoneBook::getTotal(void)
{
	return (this->_total);
}