/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 01:18:08 by seyun             #+#    #+#             */
/*   Updated: 2022/03/15 19:24:20 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

User::User()
{
}

User::~User()
{
}

void	User::setFirstName(std::string const str)
{
	this->_firstname = str;
}

void	User::setLastName(std::string const str)
{
	this->_lastname = str;
}

void	User::setNickName(std::string const str)
{
	this->_nickname = str;
}

void	User::setPhoneNumber(std::string const str)
{
	this->_phonenumber = str;
}

void	User::setDarkestSecret(std::string const str)
{
	this->_darkestsecret = str;
}

std::string User::getFirstName() const
{
	return (this->_firstname);
}

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
}
