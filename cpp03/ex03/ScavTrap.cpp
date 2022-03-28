#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_Hit_Point = 100;
	this->_Energy_Point = 50;
	this->_Attack_Point = 20;
	this->_gate_keeper = false;
	std::cout << YELLOW;
	std::cout << "[ScavTrap]: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

ScavTrap::ScavTrap(std::string const str) : ClapTrap(str) 
{
	this->_Hit_Point = 100;
	this->_Energy_Point = 50;
	this->_Attack_Point = 20;
	this->_gate_keeper = false;
	std::cout << YELLOW;
	std::cout << "[ScavTrap] " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
	(*this) = rhs;
	std::cout << YELLOW;
	std::cout << "[ScavTrap]: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << FIN;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << YELLOW;
	std::cout << "[SacavTrap]: assignement operator called" << std::endl;
	std::cout << FIN;
	this->_Hit_Point = rhs._Hit_Point;
	this->_Energy_Point = rhs._Energy_Point;
	this->_Attack_Point = rhs._Attack_Point;
	return (*this);
};

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW;
	std::cout << "[ScavTrap]: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << FIN;
};

void	ScavTrap::attack(const std::string &target)
{
	if (this->_Hit_Point > 0 && this->_Energy_Point > 0)
	{
		std::cout << GREEN;
		std::cout << "[ScavTrap]: " << this->_Name << " attack " << target << ", causing " <<
		getAttack() << " point of damage" << std::endl;
		this->_Energy_Point--;
		std::cout << FIN;
	}
	else if (this->_Hit_Point <= 0)
		std::cout << RED << "[ScavTrap]: " << this->_Name << " cant attack " << target << ". This player is already dead" << FIN << std::endl;
	else if (this->_Energy_Point <= 0)
		std::cout << RED << "[ScavTrap]: " << this->_Name << " has no Energy Point"
		<< FIN << std::endl;
};

void	ScavTrap::guardGate(void)
{	

	if (_gate_keeper)
	{
		std::cout << PINK << this->_Name << ": Gate keeper already activate" << FIN << std::endl;
	}
	else if (this->_Energy_Point)
	{
		std::cout << PINK << this->_Name << ": No Energy point Gate keeper mode activate" << FIN << std::endl;
		this->_gate_keeper = true;
	}
	else if (this->_Hit_Point)
	{
		std::cout << PINK << this->_Name << ": No Hit point Gate keeper mode activate" << FIN << std::endl;
	}
};
