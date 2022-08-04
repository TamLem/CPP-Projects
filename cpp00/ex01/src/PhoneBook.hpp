/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:18:05 by tlemma            #+#    #+#             */
/*   Updated: 2022/04/04 16:08:02 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
private:
	Contact 		contacts[8];
	int				_total;
	int				_index;
public:
	PhoneBook();
	~PhoneBook();
	void 	createContact(void);
	void	searchContact(void);
	void	printContacts(void);
	void	printOne(int index);
	int		addContact(std::string firstName, std::string lastName, 
			std::string nickName, std::string secret, std::string tel);
	int		getTotal(void);
	void	setTotal(void);
};

#endif