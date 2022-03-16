/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:02:02 by seyun             #+#    #+#             */
/*   Updated: 2022/03/16 19:44:44 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "User.hpp"

class Phonebook {

private:
	
	User _usr[8];
	int _index;

public:
	
	Phonebook();
	~Phonebook();

	void		Add(int *Num);
	void		Search(void);
	void		Command(void);
	void		setIndex(int num);
	void		PrintFullInfo(int index);
	void		PutSearchPrint();
	void		RecapInfo(void);
	int			getIndex() const;
	void		Exit(void) const;
	bool		CheckStr(std::string str);
	std::string GetFirstName(int index);
	std::string GetLastName(int index);
	std::string GetNickName(int index);
	std::string CheckValue(std::string question) const;
};

#endif
