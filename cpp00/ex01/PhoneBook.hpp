/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:02:02 by seyun             #+#    #+#             */
/*   Updated: 2022/03/11 23:13:55 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class User {

public:
	
	User();
	~User();
	
	int Add(void);
	int Search(void);
	int	Exit(void);

private:
	
	std::string _contact[8];

};
