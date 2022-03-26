#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_Name = "Unknown";
	this->_Hit_Point = 100;
	this->_Energy_Point = 100;
	this->_Attack_Point = 30;
	std::cout << COLOUR_Y;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << COLOUR_FIN;
};

FragTrap::FragTrap(std::string const str) : ClapTrap(str)
{
	this->_Name	= str;
	this->_Hit_Point = 100;
	this->_Energy_Point = 100;
	this->_Attack_Point = 30;
	std::cout << COLOUR_Y;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << COLOUR_FIN;
};

FragTrap::FragTrap(FragTrap const &rhs)
{
	(*this) = rhs;
	std::cout << COLOUR_Y;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << COLOUR_FIN;
};

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	this->_Name = rhs._Name;
	this->_Hit_Point = rhs._Hit_Point;
	this->_Energy_Point = rhs._Energy_Point;
	this->_Attack_Point = rhs._Attack_Point;
	std::cout << COLOUR_Y;
	std::cout << "*FragTrap*: assignement operator called" << std::endl;
	std::cout << COLOUR_FIN;
	return (*this);
};

FragTrap::~FragTrap(void)
{
	std::cout << COLOUR_Y;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << COLOUR_FIN;
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << COLOUR_BO << this->_Name << ": HighFivesGuys" << COLOUR_FIN << std::endl;
};
