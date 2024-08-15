/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:10:31 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 01:30:17 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Contact
{
private:

public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	/*--- Defaults ---*/
	
	Contact();
	~Contact();

	/*--- Canonical Mandates ---*/

	Contact& operator=(const Contact& other);
	Contact(const Contact& other);

	/*--- Getters ----*/

	std::string& getFirstName();
	std::string& getLastName();
	std::string& getNickname();
	std::string& getPhoneNumber();
	std::string& getDarkestSecret();

	/*--- Setters ---*/

	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setNickname(const std::string& nickname);
	void setPhoneNumber(const std::string& phoneNumber);
	void setDarkestSecret(const std::string& darkestSecret);

	/*--- Actions ---*/

	void displayContact();
	void displayField(std::string& field, size_t width);
};
