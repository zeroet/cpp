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

void Phonebook::RecapInfo(void)
{
	int index = getIndex();
	int	i(0);

	while (i <= index)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::setw(10) << GetFirstName(i);
		std::cout << "|";
		std::cout << std::setw(10) << GetLastName(i);
		std::cout << "|";
		std::cout << std::setw(10) << GetNickName(i);
		std::cout << "|" << std::endl;
		i++;
	}
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
	RecapInfo();
}

std::string Phonebook::GetFirstName(int index)
{
	if (_usr[index].getFirstName().length() > 10)
		return (_usr[index].getFirstName().substr(0, 9).append("."));
	else
		return (_usr[index].getFirstName());
}

std::string Phonebook::GetLastName(int index)
{
	if (_usr[index].getLastName().length() > 10)
		return (_usr[index].getLastName().substr(0 , 9).append("."));
	else
		return (_usr[index].getLastName());
}

std::string Phonebook::GetNickName(int index)
{
	if (_usr[index].getNickName().length() > 10)
		return (_usr[index].getNickName().substr(0 , 9).append("."));
	else
		return (_usr[index].getNickName());
}

void Phonebook:: PrintFullInfo(int index)
{
	std::cout << "first name: " << _usr[index].getFirstName() << std::endl;
	std::cout << "last name: " << _usr[index].getLastName() << std::endl;
	std::cout << "nick name: " << _usr[index].getNickName() << std::endl;
	std::cout << "phone number: " << _usr[index].getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << _usr[index].getDarkestSecret() << std::endl;
}

bool Phonebook::CheckStr(std::string str)
{
	if (str.length() > 2)
		return (0);
	if (std::isdigit(str[0]))
	{
		if ((stoi(str) >= 0) && (stoi(str) < 8))
			return (1);
	}
	else
		return (0);
	return (0);
}

void Phonebook::Search(void)
{
	int index = getIndex();
	int	i(0);
	std::string str;

	if (index == -1)
		std::cout << "ADD info First" << std::endl;
	PutSearchPrint();
	while (1)
	{
		std::cout << "Enter Index" << std::endl;
		if (std::getline(std::cin, str).eof())
			Exit();
		else if (CheckStr(str)) 
		{	
			i = stoi(str);
			PrintFullInfo(i);
			break ;
		}
		else
			std::cout << "Command not found" << std::endl;
	}
}

void Phonebook::Exit(void) const
{
	Phonebook::~Phonebook();
	exit(0);
}
