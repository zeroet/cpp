/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:01:44 by seyun             #+#    #+#             */
/*   Updated: 2022/03/15 20:22:01 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook() : num_usr(0)
{
	std::cout << "Phonebook Open" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook Close" << std::endl;
}

int	Phonebook::CommandCheck( std::string str)
{
	if (str.compare("ADD") == 0)
		Add();
	if (str.compare("Search") == 0)
		Search();
	if (str.compare("Exit") == 0)
		Exit();
	else
		std::cout << "Error" << std::endl;
	return (0);
}

int	Phonebook::Add(void)
{
	str = "";
	int i(0);

	std::cout << "First Name :" << std::endl;
	std::getline(std::cin,str);
	usr[i].setFirstName(str);
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, str);
	usr[i].setLastName(str);
	std::cout << "Nick Name: " << std::endl;
	std::getline(std::cin, str);
	usr[i].setNickName(str);
	std::cout << "Phone Number: " << std::endl;
	std::getline(std::cin, str);
	usr[i].setPhoneNumber(str);
	std::cout << "DarkestSecret: " <<std::endl;
	std::getline(std::cin, str);
	usr[i].setDarkestSecret(str);

	num_usr++;
	return (0);
}

int Phonebook::Search(void)
{
	return (0);
}

int Phonebook::Exit(void)
{
	return (0);
}
