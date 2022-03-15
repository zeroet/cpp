/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:02:02 by seyun             #+#    #+#             */
/*   Updated: 2022/03/15 20:21:58 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "User.hpp"

class Phonebook {

private:
	
	std::string _contact[8];

public:
	
	Phonebook();
	~Phonebook();

	std::string str;

	User usr[8];
	
	int num_usr;
	int Add(void);
	int Search(void);
	int	Exit(void);
	int CommandCheck(std::string str);
};

#endif
