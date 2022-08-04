/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:29:38 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/29 19:46:05 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

int Contact::setData(std::string firstName, std::string lastName,
		std::string nickName, std::string secret, std::string tel)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->secret = secret;
	this->tel = tel;
	return (0);
}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

std::string	Contact::getNickName(void)
{
	return (this->nickName);
}

std::string	Contact::getSecret(void)
{
	return (this->secret);
}

std::string	Contact::getTel(void)
{
	return (this->tel);
}

void Contact::printData(void)
{
	std::cout << std::endl << std::setw(20) 
		<< "------- Contact Details -------" << std::endl << std::endl; 
	std::cout << std::setw(20) << "First name: "<< this->firstName << std::endl;
	std::cout << std::setw(20) << "Last name: "<< this->lastName << std::endl;
	std::cout << std::setw(20) << "Nickname: "<< this->nickName << std::endl;
	std::cout << std::setw(20) << "Secret key: "<< this->secret << std::endl;
	std::cout << std::setw(20) << "Phone no: "<< this->tel << std::endl;
}