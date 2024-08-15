/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:08:30 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/15 04:10:15 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook
{
private:

public:
	int	contactIndex;
	Contact contacts[8];

	void addContact(const Contact& newContact);
	PhoneBook(/* args */);
	~PhoneBook();
};

