#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string const &str)
{
	this->_type = str;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string const &str)
{
	this->_type = str;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}
