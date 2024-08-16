/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:10:31 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 06:58:34by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:

	/*--- Defaults ---*/
	
	Contact();
	~Contact();

	/*--- Canonical Mandates ---*/

	Contact& operator=(const Contact& other);
	Contact(const Contact& other);

	/*--- Getters ----*/

	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getNickname() const;
	const std::string& getPhoneNumber() const;
	const std::string& getDarkestSecret() const;

	/*--- Setters ---*/

	bool setFirstName();
	bool setLastName();
	bool setNickname();
	bool setPhoneNumber();
	bool setDarkestSecret();

	/*--- Actions ---*/

	void displayContact();
	void displayField(const std::string& field, size_t width);
};
