#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_Hit_Point = 100;
	_Energy_Point = 100;
	_Attack_Point = 30;
	std::cout << YELLOW;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

FragTrap::FragTrap(std::string const str) : ClapTrap(str)
{
	_Hit_Point = 100;
	_Energy_Point = 100;
	_Attack_Point = 30;
	std::cout << YELLOW;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
	(*this) = rhs;
	std::cout << YELLOW;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << FIN;
};

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	this->_Hit_Point = rhs._Hit_Point;
	this->_Energy_Point = rhs._Energy_Point;
	this->_Attack_Point = rhs._Attack_Point;
	std::cout << YELLOW;
	std::cout << "*FragTrap*: assignement operator called" << std::endl;
	std::cout << FIN;
	return (*this);
};

FragTrap::~FragTrap(void)
{
	std::cout << YELLOW;
	std::cout << "*FragTrap*: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << FIN;
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << PURPLE << this->_Name << ": HighFivesGuys" << FIN << std::endl;
};
