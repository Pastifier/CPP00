/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:55:14 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 01:08:21 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void) {
	PhoneBook phoneBook;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	phoneBook.start();
	return 0;
}
