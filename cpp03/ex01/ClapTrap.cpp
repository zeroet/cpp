#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_Name = "Unknown";
	this->_Hit_Point = 10;
	this->_Energy_Point = 10;
	this->_Attack_Point = 0;
	std::cout << COLOUR_Y;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << COLOUR_FIN;
};

ClapTrap::ClapTrap(std::string str) 
	: _Name(str), _Hit_Point(10), _Energy_Point(10), _Attack_Point(0)
{
	std::cout << COLOUR_Y;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " created" << std::endl;
	std::cout << COLOUR_FIN;
};

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	(*this) = rhs;
	std::cout << COLOUR_Y;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " copyed" << std::endl;
	std::cout << COLOUR_FIN;
};

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << COLOUR_Y;
	std::cout << "ClapTrap: assaignement operator called" << std::endl;
	std::cout << COLOUR_FIN;
	this->_Name = rhs._Name;
	this->_Hit_Point = rhs._Hit_Point;
	this->_Energy_Point = rhs._Energy_Point;
	this->_Attack_Point = rhs._Attack_Point;
	return (*this);
};

ClapTrap::~ClapTrap()
{
	std::cout << COLOUR_Y;
	std::cout << "ClapTrap: " << "Player " << this->_Name << " Game Over" << std::endl;
	std::cout << COLOUR_FIN;
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


void	ClapTrap::attack( const std::string &target)
{
	if (this->_Hit_Point > 0 && this->_Energy_Point > 0)
	{
		std::cout << COLOUR_G;
		std::cout << "ClapTrap: " << this->_Name << " attack " << target << ", causing " << 
		getAttack() << " point of damage" << std::endl;
		this->_Energy_Point--;
		std::cout << COLOUR_FIN;
	}
	else if (this->_Hit_Point <= 0)
		std::cout << COLOUR_R << "ClapTrap: " << this->_Name << " cant attack " << target << ". This player is already dead" << COLOUR_FIN << std::endl;
	else if (this->_Energy_Point <= 0)
		std::cout << COLOUR_R << "ClapTrap: " << this->_Name << " has no Energy Point" 
		<< COLOUR_FIN <<std::endl;

};

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_Hit_Point <= 0)
	{	
		std::cout << COLOUR_R << "ClapTrap: " << this->_Name << " is already dead" << COLOUR_FIN << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->_Name << " take " << amount << " damage" <<std::endl;
	this->_Hit_Point-= amount;
	std::cout << COLOUR_R;
	if (this->_Hit_Point <= 0)
		std::cout << "ClapTrap: " << this->_Name << " died" << std::endl;
	std::cout << COLOUR_FIN;
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
		std::cout << COLOUR_B;
		std::cout << "ClapTrap: "<< this->_Name << " be repaired " << amount << 
			" point" << std::endl;
		this->_Hit_Point += amount;
		this->_Energy_Point--;
		std::cout << COLOUR_FIN;
	}
	else if (this->_Hit_Point <= 0)
		std::cout << COLOUR_R << "ClapTrap: " << this->_Name << " is already dead" 
		<< COLOUR_FIN << std::endl;
	else if (this->_Energy_Point <= 0)
		std::cout << COLOUR_R << "ClapTrap: " << this->_Name << " has no Energy Point" 
		<< COLOUR_FIN <<std::endl;
};
