#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	this->_Type = "WrongCat";
	std::cout << RED << "[WrongCat] Constructor called" << FIN << std::endl;
};

WrongCat::WrongCat(WrongCat const &rhs)
{
	*this = rhs;
	std::cout << RED << "[WrongCat] Copy Constructor called" << FIN << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << RED << "[WrongCat] Destructor called" << FIN << std::endl;
};

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->_Type = rhs._Type;
	std::cout << RED << "[WrongCat] Assignement fnc called" << FIN << std::endl;
	return *this;
};

void	WrongCat::makeSound() const
{
	std::cout << PURPLE << "[WongCat] make sound fnc @#@#@#@#@#" << FIN << std::endl;
};
