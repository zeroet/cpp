/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:01:14 by seyun             #+#    #+#             */
/*   Updated: 2022/03/15 20:21:51 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook book;
	std::string str("");

	std::getline(std::cin, str);
	book.CommandCheck(str);
	
	std::cout << book.usr[0].getFirstName() << std::endl;
	std::cout << book.usr[0].getLastName() << std::endl;
	std::cout << book.usr[0].getNickName() << std::endl;
	std::cout << book.usr[0].getPhoneNumber() << std::endl;
	std::cout << book.usr[0].getDarkestSecret() << std::endl;
	return (0);
}
