#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Unknown"), _Hit_Point(10), _Energy_Point(10), _Attack_Point(0)
{
	std::cout << YELLOW;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

ClapTrap::ClapTrap(std::string str) 
	: _Name(str), _Hit_Point(10), _Energy_Point(10), _Attack_Point(0)
{
	std::cout << YELLOW;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << FIN;
};

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	(*this) = rhs;
	std::cout << YELLOW;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << FIN;
};

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << YELLOW;
	std::cout << "ClapTrap: assaignement operator called" << std::endl;
	std::cout << FIN;
	this->_Name = rhs._Name;
	this->_Hit_Point = rhs._Hit_Point;
	this->_Energy_Point = rhs._Energy_Point;
	this->_Attack_Point = rhs._Attack_Point;
	return (*this);
};

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << FIN;
};

std::string	ClapTrap::getName() const
{
	return (this->_Name);
};

int	ClapTrap::getHit() const
{
	return (this->_Hit_Point);
};

int	ClapTrap::getEnergy() const
{
	return (this->_Energy_Point);
};

int	ClapTrap::getAttack() const
{
	return (this->_Attack_Point);
};

void	ClapTrap::setHit(int num)
{
	this->_Hit_Point = num;
};

void	ClapTrap::attack( const std::string &target)
{
	if (this->_Hit_Point > 0 && this->_Energy_Point > 0)
	{
		std::cout << GREEN;
		std::cout << "ClapTrap: " << this->_Name << " attack " << target << ", causing " << 
		getAttack() << " point of damage" << std::endl;
		this->_Energy_Point--;
		std::cout << FIN;
	}
	else if (this->_Hit_Point <= 0)
		std::cout << RED << "ClapTrap: " << this->_Name << " cant attack " << target << ". This player is already dead" << FIN << std::endl;
	else if (this->_Energy_Point <= 0)
		std::cout << RED << "ClapTrap: " << this->_Name << " has no Energy Point" 
		<< FIN <<std::endl;

};

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_Hit_Point <= 0)
	{	
		std::cout << RED << "ClapTrap: " << this->_Name << " is already dead" << FIN << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->_Name << " take " << amount << " damage" <<std::endl;
	this->_Hit_Point-= amount;
	if (this->_Hit_Point < 0)
		this->_Hit_Point = 0;
	std::cout << RED;
	if (this->_Hit_Point <= 0)
		std::cout << "ClapTrap: " << this->_Name << " died" << std::endl;
	std::cout << FIN;
};

void	ClapTrap::beRepaired( unsigned int amount)
{
	if (amount < 0 || amount > UINT_MAX)
	{	
		std::cout << "Player Used Damage Hack! Go to hell" << std::endl;
		return ;
	}
	if (this->_Hit_Point > 0 && this->_Energy_Point > 0)
	{	
		std::cout << BLUE;
		std::cout << "ClapTrap: "<< this->_Name << " be repaired " << amount << 
			" point" << std::endl;
		this->_Hit_Point += amount;
		this->_Energy_Point--;
		std::cout << FIN;
	}
	else if (this->_Hit_Point <= 0)
		std::cout << RED << "ClapTrap: " << this->_Name << " is already dead" 
		<< FIN << std::endl;
	else if (this->_Energy_Point <= 0)
		std::cout << RED << "ClapTrap: " << this->_Name << " has no Energy Point" 
		<< FIN <<std::endl;
};
