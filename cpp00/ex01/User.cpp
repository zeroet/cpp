/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 01:18:08 by seyun             #+#    #+#             */
/*   Updated: 2022/03/15 01:59:14 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

User::User()
{
	std::cout << "constructor Class User" << std::endl;
}

User::~User()
{
	std::cout << "destructor Class User" << std::endl;
}

void	User::setFirstName(std::string const str)
{
	this->_firstname = str;
}

/*void	User::setLastName(std::string const str)
{
	this->_lastname;
}

void	User::setNickName(std::string const str)
{
	this->_nickname;
}

void	User::setPhoneNumber(std::string const str)
{
	this->_phonenumber;
}

void	User::setDarkestSecret(std::string const str)
{
	this->_darkestsecret;
}
*/
std::string User::getFirstName() const
{
	return (this->_firstname);
}
/*
std::string	User::getLastName() const
{
	return (this->_lastname);
}

std::string	User::getNickName() const
{
	return (this->_nickname);
}

std::string User::getPhoneNumber() const
{
	return (this->_phonenumber);
}

std::string User::getDarkestSecret() const
{
	return (this->_darkestsecret);
}*/
