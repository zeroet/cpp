#include "PhoneBook.hpp"

Phonebook::Phonebook() : _index(0)
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
	int Num(0);
	
	while (1)
	{
		std::cout << "Enter : ADD | SEARCH | EXIT" << std::endl;
		if(std::getline(std::cin, str).eof())
			Exit();
		if (str.compare("ADD") == 0)
			Add(&Num);
		else if (str.compare("SEARCH") == 0)
			Search();
		else if (str.compare("EXIT") == 0)
			Exit();
		else
			std::cout << "Command not found" << std::endl;
	}
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

void Phonebook::Add(int *Num)
{
	std::string str = "";
	
	_usr[*Num % 8].setFirstName(CheckValue("first name: "));
	_usr[*Num % 8].setLastName(CheckValue("last name: "));
	_usr[*Num % 8].setNickName(CheckValue("nick name: "));
	_usr[*Num % 8].setPhoneNumber(CheckValue("phone number: "));
	_usr[*Num % 8].setDarkestSecret(CheckValue("darkest secret: "));
	std::cout << "info saved in Phonebook index[" << *Num % 8 << "]" << std::endl;
	setIndex((*Num % 8));
	*Num += 1;
}

void Phonebook::RecapInfo(void)
{
	int	i(0);
	
	while (!_usr[i].getFirstName().empty())
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
		if (i == 8)
			return ;
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
	if (str.length() > 1)
		return (0);
	if (std::isdigit(str[0]))
	{
		if ((stoi(str) >= 0) && (stoi(str) < 8))
			if (!_usr[std::stoi(str)].getFirstName().empty())
				return (1);
	}
	else
		return (0);
	return (0);
}

void Phonebook::Search(void)
{
	int	i(0);
	std::string str;

	if (_usr[0].getFirstName().empty())
	{	
		std::cout << "ADD info First" << std::endl;
		return ;
	}
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
