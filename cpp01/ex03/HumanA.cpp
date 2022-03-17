#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &objet) : _Name(name), objet(objet)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_Name << " attacks with their " << 
		objet.getType() << std::endl;
}
