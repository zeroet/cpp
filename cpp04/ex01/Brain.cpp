#include "Brain.hpp"

Brain::Brain()
{
	std::cout << RED << "[Brain] Constructor called" << FIN << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
		_Ideas[i] = "";
};

Brain::~Brain()
{
	std::cout << RED << "[Brain] Destructor called" << FIN << std::endl;
};

Brain::Brain(Brain const &rhs)
{
	*this = rhs;
	std::cout << "[Brain] copy Constructor called" << std::endl;
};

Brain &Brain::operator=(Brain const &rhs)
{
	for (int i(0); i < MAX_IDEAS; i++)
		this->_Ideas[i] = rhs._Ideas[i];
	std::cout << "[Brain] assignement fnc called" << std::endl;
	return *this;
};
/*
void	Brain::setBrain(int i, std::string str)
{
	this->_Ideas[i] = str;
};

std::string Brain::getBrain(int i) const
{
	return (this->_Ideas[i]);
};
*/

