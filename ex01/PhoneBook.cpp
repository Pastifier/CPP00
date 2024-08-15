/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 01:59:41 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 02:18:06 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

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
	this->contactIndex++;
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
		contacts[i].displayField(contacts[i].getFirstName(), width);
		std::cout << "|";
		contacts[i].displayField(contacts[i].getLastName(), width);
		std::cout << "|";
		contacts[i].displayField(contacts[i].getNickname(), width);
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
			std::cout << "Enter first name: ";
			std::getline(std::cin, newContact.firstName);
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			if (newContact.firstName.empty()) {
				std::cout << "First name cannot be empty. Please try again." << std::endl;
				continue;
			}
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
				continue;
			}
			std::cout << "Enter last name: ";
			std::getline(std::cin, newContact.lastName);
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			if (newContact.lastName.empty()) {
				std::cout << "Last name cannot be empty. Please try again." << std::endl;
				continue;
			}
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
				continue;
			}
			std::cout << "Enter nickname: ";
			std::getline(std::cin, newContact.nickname);
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			if (newContact.nickname.empty()) {
				std::cout << "Nickname cannot be empty. Please try again." << std::endl;
				continue;
			}
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
				continue;
			}
			std::cout << "Enter phone number: ";
			std::getline(std::cin, newContact.phoneNumber);
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			if (newContact.phoneNumber.empty()) {
				std::cout << "Phone number cannot be empty. Please try again." << std::endl;
				continue;
			}
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
				continue;
			}
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, newContact.darkestSecret);
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			if (newContact.darkestSecret.empty()) {
				std::cout << "Darkest secret cannot be empty. Please try again." << std::endl;
				continue;
			}
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Input could not be identified as a valid ASCII string. Please try again." << std::endl;
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
		if (desiredIndex >= INT_MAX || desiredIndex <= INT_MIN) {
			std::cout << "Integer Overflow detected. program will ensue with undefined behaviour" << std::endl;
		}
		if (desiredIndex < 0 || desiredIndex > 7) {
			std::cout << "Index out-of-range! Choose a number from '0' to '7'" << std::endl;
			continue;
		}
		contacts[(int)desiredIndex].displayContact();
		std::cin.ignore(1, '\n');
		running = false;
	}
	return true;
}
