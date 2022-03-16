/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:02:02 by seyun             #+#    #+#             */
/*   Updated: 2022/03/16 02:25:08 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "User.hpp"

class Phonebook {

private:
	
	User _usr[8];
	int _index;

public:
	
	Phonebook();
	~Phonebook();

	void	Add(void);
	void	Search(void);
	void	Exit(void) const;
	void	Command(void);
	void	setIndex(int num);
	int		getIndex() const;
	std::string CheckValue(std::string question) const;
	void	PutSearchPrint();
};

#endif
