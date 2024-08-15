/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 01:59:41 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/15 04:09:48 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	contactIndex = 0;
	for (int i = 0; i < 8; i++)
	{
		contacts[i] = Contact();
	}
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(const Contact &newContact)
{
	if (this->contactIndex == 8)
		this->contactIndex = 0;
	this->contacts[contactIndex] = newContact;
}
