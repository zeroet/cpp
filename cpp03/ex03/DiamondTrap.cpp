#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	_Name = "Unkwown";
	std::cout << YELLOW;
	std::cout << "#DiamondTrap#: " << "Player " << this->_Name << " created" << std::endl;
	_Energy_Point = ScavTrap::_Energy_Point;
	std::cout << FIN;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << YELLOW;
	this->_Name = name;
	std::cout << "#DiamondTrap#: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
	std::cout << YELLOW;
	std::cout << "#DiamondTrap#: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << FIN;
	(*this) = rhs;
};

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << YELLOW;
	std::cout << "#DiamondTrap#: assignement operator called" << std::endl;
	std::cout << FIN;
	ClapTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	FragTrap::operator=(rhs);
	this->_Name = rhs._Name;
	return (*this);
};

DiamondTrap::~DiamondTrap(void)
{
	std::cout << YELLOW;
	std::cout << "#DiamondTrap#: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << FIN;
};

void	DiamondTrap::whoAmI()
{
	std::cout << ORANGE << this->_Name << " is DiamondTrap Name and ClapTrap Name is : " << ClapTrap::_Name<< FIN << std::endl;
};
