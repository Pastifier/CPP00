/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:08:30 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 01:10:25 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook
{
private:
	int	contactIndex;
	Contact contacts[8];

public:
	void addContact(const Contact& newContact);
	bool searchContact();
	void displayContactsBriefs(int widthOfField);
	void start();
	PhoneBook();
	~PhoneBook();
};

