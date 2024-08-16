/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:08:30 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 07:12:48 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook
{
private:
	unsigned int	_contactIndex;
	Contact _contacts[8];

public:
	void addContact(const Contact& newContact);
	bool searchContact();
	void displayContactsBriefs(int widthOfField);
	void start();
	PhoneBook();
	~PhoneBook();
};

