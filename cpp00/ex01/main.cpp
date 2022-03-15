/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:01:14 by seyun             #+#    #+#             */
/*   Updated: 2022/03/15 02:03:05 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook book;
	std::string str;
		
	std::cout << "Phone Book Run" << std::endl;
	
	book.usr.setFirstName("YUN");
	str = book.usr.getFirstName();

	std::cout << str << std::endl;
	return (0);
}
