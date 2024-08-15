/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:16:25 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 02:54:31 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

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

std::string& Contact::getFirstName()
{
	return (this->firstName);
}

std::string& Contact::getLastName()
{
	return (this->lastName);
}

std::string& Contact::getNickname()
{
	return (this->nickname);
}

std::string& Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string& Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

void Contact::displayField(std::string& field, size_t width)
{
	std::string fieldCopy = field;
	if (fieldCopy.length() > width)
	{
		fieldCopy.resize(width - 1);
		fieldCopy.append(".");
	}
	std::cout << std::setw(width) << fieldCopy;
}

void Contact::displayContact()
{
	std::endl(std::cout);
	if (firstName.empty())
	{
		std::cout << "Contact is empty." << std::endl;
		std::endl(std::cout);
		return;
	}
	std::cout << "First Name: "<< this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
	std::endl(std::cout);
}
