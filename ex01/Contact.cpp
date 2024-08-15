/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:16:25 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/15 03:15:49 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact()
{
}

Contact& Contact::operator=(const Contact& other)
{
	setFirstName(other.firstName);
	setLastName(other.lastName);
	setNickname(other.nickname);
	setPhoneNumber(other.phoneNumber);
	setDarkestSecret(other.darkestSecret);
	return (*this);
}

Contact::Contact(const Contact& other)
{
	setFirstName(other.firstName);
	setLastName(other.lastName);
	setNickname(other.nickname);
	setPhoneNumber(other.phoneNumber);
	setDarkestSecret(other.darkestSecret);
}

void Contact::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(const std::string& nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

const std::string& Contact::getFirstName()
{
	return (this->firstName);
}

const std::string& Contact::getLastName()
{
	return (this->lastName);
}

const std::string& Contact::getNickname()
{
	return (this->nickname);
}

const std::string& Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

const std::string& Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
