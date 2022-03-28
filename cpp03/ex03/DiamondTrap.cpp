#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_Name = "Unkwown";
	std::cout << YELLOW;
	std::cout << "#DiamondTrap#: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
<<<<<<< HEAD

=======
	setHit(ScavTrap::_Hit_Point);
	ScavTrap::_Energy_Point;
	ScavTrap::_Attack_Point;
>>>>>>> 6001177debe56e3d92119c25671de0bc67de911f
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << YELLOW;
	this->_Name = name;
<<<<<<< HEAD
=======
	_Hit_Point = FragTrap::_Hit_Point;
	_Energy_Point = ScavTrap::_Energy_Point;
	_Attack_Point = FragTrap::_Attack_Point;
>>>>>>> 6001177debe56e3d92119c25671de0bc67de911f
	std::cout << "#DiamondTrap#: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
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
