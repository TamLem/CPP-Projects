/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:28:24 by tlemma            #+#    #+#             */
/*   Updated: 2022/03/29 18:36:17 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	secret;
	std::string	tel;
	/* data */
public:
	Contact(/* args */);
	~Contact();
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getSecret(void);
	std::string	getTel(void);
	int setData(std::string firstName, std::string lastName,
		std::string nickName, std::string secret, std::string tel);
	void printData(void);

};

#endif