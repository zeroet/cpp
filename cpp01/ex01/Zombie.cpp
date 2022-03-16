#include "Zombie.hpp"

Zombie::Zombie() : _nom("default")
{
	std::cout << this->_nom<< ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_nom = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << 
		this->_nom << ": die" << std::endl;
}

void	Zombie::setNom(std::string name)
{
	this->_nom = name;
}

std::string Zombie::getNom() const
{
	return (this->_nom);
}

void	Zombie::announce(void) const
{
	std::cout << getNom() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
