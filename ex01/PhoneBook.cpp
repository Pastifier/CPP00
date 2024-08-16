/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 01:59:41 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 07:15:02 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(/* args */)
{
	_contactIndex = 0;
	for (int i = 0; i < 8; i++)
	{
		_contacts[i] = Contact();
	}
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(const Contact &newContact)
{
	if (this->_contactIndex == 8)
		this->_contactIndex = 0;
	this->_contacts[_contactIndex] = newContact;
	this->_contactIndex++;
}

void PhoneBook::displayContactsBriefs(int width)
{
	std::cout << std::setw(width) << "Index" << "|";
	std::cout << std::setw(width) << "First Name" << "|";
	std::cout << std::setw(width) << "Last Name" << "|";
	std::cout << std::setw(width) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(width) << i << "|";
		_contacts[i].displayField(_contacts[i].getFirstName(), width);
		std::cout << "|";
		_contacts[i].displayField(_contacts[i].getLastName(), width);
		std::cout << "|";
		_contacts[i].displayField(_contacts[i].getNickname(), width);
		std::cout << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::start() {
	bool running = true;

	while (running) {
		std::string command;
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command.empty() && !std::cin.eof()) {
			continue;
		}
		if (command == "EXIT" || std::cin.eof()) {
			std::cout << "\nBye-bye!" << std::endl;
			running = false;
		} else if (command == "ADD") {

			Contact newContact;

			if (!newContact.setFirstName()) {
				continue;
			}
			if (!newContact.setLastName()) {
				continue;
			}
			if (!newContact.setNickname()) {
				continue;
			}
			if (!newContact.setPhoneNumber()) {
				continue;
			}
			if (!newContact.setDarkestSecret()) {
				continue;
			}
			addContact(newContact);

		} else if (command == "SEARCH") {
			if (!searchContact()) {
				break;
			}
		} else {
			std::cout << "Invalid command" << std::endl;
			continue;
		}
	}
}

bool PhoneBook::searchContact() {
	double desiredIndex;
	bool running = true;

	displayContactsBriefs(10);
	while (running) {
		std::cout << "Enter the index of the contact you want to view: ";
		std::cin >> desiredIndex;
		if (std::cin.eof()) {
			std::cout << std::endl;
			return false;
		}
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Non-numerical index detected! Please try again with a number between '0' and '7'" << std::endl;
			continue;
		}
		if (desiredIndex > UINT_FAST32_MAX || desiredIndex < 0) {
			std::cout << "Integer Overflow detected. program will ensue with undefined behaviour" << std::endl;
		}
		if (floor(desiredIndex) != desiredIndex) {
			std::cout << "Non-integer index detected! Please try again with a number between '0' and '7'" << std::endl;
			continue;
		}
		if (desiredIndex < 0 || desiredIndex > 7) {
			std::cout << "Index out-of-range! Choose a number from '0' to '7'" << std::endl;
			continue;
		}
		_contacts[(int)desiredIndex].displayContact();
		std::cin.ignore(10000, '\n');
		running = false;
	}
	return true;
}
