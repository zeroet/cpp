#include "PhoneBook.hpp"

Phonebook::Phonebook() : _index(-1)
{
	std::cout << "Phonebook Open" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook Close" << std::endl;
}

void Phonebook::setIndex(int num)
{
	this->_index = num;
}

int	Phonebook::getIndex() const
{
	return (this->_index);
}

void Phonebook::Command()
{
	std::string str("");
	
	std::cout << "Enter : ADD | SEARCH | EXIT" << std::endl;
	if(std::getline(std::cin, str).eof())
		Exit();
	if (str.compare("ADD") == 0)
		Add();
	else if (str.compare("SEARCH") == 0)
		Search();
	else if (str.compare("EXIT") == 0)
		Exit();
	else
		std::cout << "Command not found" << std::endl;
}

std::string Phonebook::CheckValue(std::string question) const
{
	std::string ret;

	while(ret.empty())
	{
		std::cout << question << std::endl;
		if (std::getline(std::cin, ret).eof())
			Exit();
		else if (!ret.empty())
			break ;
	}
	return (ret);
}

void Phonebook::Add(void)
{
	std::string str = "";
	int index = getIndex();
	
	if (++index < 8)
	{
		_usr[index].setFirstName(CheckValue("first name: "));
		_usr[index].setLastName(CheckValue("last name: "));
		_usr[index].setNickName(CheckValue("nick name: "));
		_usr[index].setPhoneNumber(CheckValue("phone number: "));
		_usr[index].setDarkestSecret(CheckValue("darkest secret: "));
		setIndex(index);
		std::cout << "info saved in Phonebook index[" << index << "]" << std::endl;
	}
	else
		std::cout << "Phonebook is full" << std::endl;
}

void Phonebook::PutSearchPrint(void)
{
	std::cout << "|";
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nick name";
	std::cout << "|" << std::endl;
}

void Phonebook::Search(void)
{
	int index = getIndex();
	int i(0);
	std::string str;

	if (index == -1)
		std::cout << "ADD info First" << std::endl;
	PutSearchPrint();
	std::cout << "Enter Index or N" << std::endl;
	if (std::getline(std::cin, str).eof())
		Exit();
}

void Phonebook::Exit(void) const
{
	Phonebook::~Phonebook();
	exit(0);
}
