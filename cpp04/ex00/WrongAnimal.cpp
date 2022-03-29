#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _Type("WrongAnimal")
{
	std::cout << RED << "[WrongAnimal] Constructor called" << FIN << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	*this = rhs;
	std::cout << RED << "[WrongAnimal] Copy Constructor called" << FIN << std::endl;
};

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "[WrongAnimal] Destructor called" << FIN << std::endl;
};

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_Type = rhs._Type;
	std::cout << RED << "[WrongAnimal] Assignement fnc called" << FIN << std::endl;
	return *this;
};

void	WrongAnimal::makeSound() const
{
	std::cout << PURPLE << "[WongAnimal] make sound fnc #@#@#@#@#@" << FIN << std::endl;
};

std::string WrongAnimal::getType() const
{
	return(this->_Type);
};
