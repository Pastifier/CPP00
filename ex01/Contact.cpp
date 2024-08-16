/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:16:25 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 07:11:35 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(/* args */)
{
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::~Contact()
{
}

Contact& Contact::operator=(const Contact& other)
{
	this->_firstName = other.getFirstName();
	this->_lastName = other.getLastName();
	this->_nickname = other.getNickname();
	this->_phoneNumber = other.getPhoneNumber();
	this->_darkestSecret = other.getDarkestSecret();
	return (*this);
}

Contact::Contact(const Contact& other)
{
	this->_firstName = other.getFirstName();
	this->_lastName = other.getLastName();
	this->_nickname = other.getNickname();
	this->_phoneNumber = other.getPhoneNumber();
	this->_darkestSecret = other.getDarkestSecret();
}

bool Contact::setFirstName()
{
	std::string firstName;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	if (std::cin.eof())
		return false;
	if (firstName.empty())
	{
		std::cout << "First name cannot be empty." << std::endl;
		return false;
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid input." << std::endl;
		return false;
	}
	_firstName = firstName;
	return true;
}

bool Contact::setLastName()
{
	std::string lastName;

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	if (std::cin.eof())
		return false;
	if (lastName.empty())
	{
		std::cout << "Last name cannot be empty." << std::endl;
		return false;
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
		return false;
	}
	_lastName = lastName;
	return true;
}

bool Contact::setNickname()
{
	std::string nickname;

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		return false;
	if (nickname.empty())
	{
		std::cout << "Nickname cannot be empty." << std::endl;
		return false;
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
		return false;
	}
	this->_nickname = nickname;
	return true;
}

bool Contact::setPhoneNumber()
{
	std::string phoneNumber;

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	if (std::cin.eof())
		return false;
	if (phoneNumber.empty())
	{
		std::cout << "Phone number cannot be empty." << std::endl;
		return false;
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
		return false;
	}

	const std::string validChars = "0123456789";
	bool valid = true;

	for (size_t i = 0; i < phoneNumber.length(); i++)
	{
		if (validChars.find(phoneNumber[i]) == std::string::npos)
		{
			valid = false;
			break;
		}
	}
	if (!valid)
	{
		std::cout << "I mean... I'm not sure that's a valid phone number. But I'll add it anyway." << std::endl;
	}

	this->_phoneNumber = phoneNumber;
	return true;
}

bool Contact::setDarkestSecret()
{
	std::string darkestSecret;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (std::cin.eof())
		return false;
	if (darkestSecret.empty())
	{
		std::cout << "Darkest secret cannot be empty." << std::endl;
		return false;
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
		return false;
	}
	this->_darkestSecret = darkestSecret;
	return true;
}

const std::string& Contact::getFirstName() const
{
	return (this->_firstName);
}

const std::string& Contact::getLastName() const
{
	return (this->_lastName);
}

const std::string& Contact::getNickname() const
{
	return (this->_nickname);
}

const std::string& Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

const std::string& Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

void Contact::displayField(const std::string& field, size_t width)
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
	if (getFirstName().empty())
	{
		std::cout << "Contact is empty." << std::endl;
		std::endl(std::cout);
		return;
	}
	std::cout << "First Name: "<< getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
	std::endl(std::cout);
}
