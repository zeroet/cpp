#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_Hit_Point = 100;
	this->_Energy_Point = 50;
	this->_Attack_Point = 20;
	this->_gate_keeper = false;
	std::cout << COLOUR_Y;
	std::cout << "[ScavTrap]: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << COLOUR_FIN;
};

ScavTrap::ScavTrap(std::string const str) : ClapTrap(str) 
{
	this->_Hit_Point = 100;
	this->_Energy_Point = 50;
	this->_Attack_Point = 20;
	this->_gate_keeper = false;
	std::cout << COLOUR_Y;
	std::cout << "[ScavTrap] " << "Player " << this->_Name << " created" << std::endl;
	std::cout << COLOUR_FIN;
};

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	(*this) = rhs;
	std::cout << COLOUR_Y;
	std::cout << "[ScavTrap]: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << COLOUR_FIN;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << COLOUR_Y;
	std::cout << "[SacavTrap]: assignement operator called" << std::endl;
	std::cout << COLOUR_FIN;
	this->_Hit_Point = rhs._Hit_Point;
	this->_Energy_Point = rhs._Energy_Point;
	this->_Attack_Point = rhs._Attack_Point;
	return (*this);
};

ScavTrap::~ScavTrap()
{
	std::cout << COLOUR_Y;
	std::cout << "[ScavTrap]: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << COLOUR_FIN;
};

void	ScavTrap::attack(const std::string &target)
{
	if (this->_Hit_Point > 0 && this->_Energy_Point > 0)
	{
		std::cout << COLOUR_G;
		std::cout << "[ScavTrap]: " << this->_Name << " attack " << target << ", causing " <<
		getAttack() << " point of damage" << std::endl;
		this->_Energy_Point--;
		std::cout << COLOUR_FIN;
	}
	else if (this->_Hit_Point <= 0)
		std::cout << COLOUR_R << "[ScavTrap]: " << this->_Name << " cant attack " << target << ". This player is already dead" << COLOUR_FIN << std::endl;
	else if (this->_Energy_Point <= 0)
		std::cout << COLOUR_R << "[ScavTrap]: " << this->_Name << " has no Energy Point"
		<< COLOUR_FIN << std::endl;
};

void	ScavTrap::guardGate(void)
{	

	if (_gate_keeper)
	{
		std::cout << COLOUR_P << this->_Name << ": Gate keeper already activate" << COLOUR_FIN << std::endl;
	}
	else if (this->_Energy_Point)
	{
		std::cout << COLOUR_P << this->_Name << ": No Energy point Gate keeper mode activate" << COLOUR_FIN << std::endl;
		this->_gate_keeper = true;
	}
	else if (this->_Hit_Point)
	{
		std::cout << COLOUR_P << this->_Name << ": No Hit point Gate keeper mode activate" << COLOUR_FIN << std::endl;
	}
};
