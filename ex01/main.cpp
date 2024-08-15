/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:55:14 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/15 05:53:27 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void) {
	bool running = true;
	PhoneBook phoneBook;

	while (running) {
		std::string command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "EXIT" || std::cin.eof()) {
			running = false;
		} else if (command == "ADD") {
			Contact newContact;
			std::cout << "Enter first name: ";
			std::cin >> newContact.firstName;
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			std::cout << "Enter last name: ";
			std::cin >> newContact.lastName;
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			std::cout << "Enter nickname: ";
			std::cin >> newContact.nickname;
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			std::cout << "Enter phone number: ";
			std::cin >> newContact.phoneNumber;
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			std::cout << "Enter darkest secret: ";
			std::cin >> newContact.darkestSecret;
			if (std::cin.eof()) {
				std::cout << std::endl;
				break;
			}
			phoneBook.addContact(newContact);
		} else if (command == "SEARCH") {
			// Implement search
		} else {
			std::cout << "Invalid command" << std::endl;
		}
	}
	return 0;
}
