#include "HumanB.hpp"

HumanB::HumanB(std::string const name) : _Name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_Name << " attacks with their " << weapon->getType() << std::endl;
}

