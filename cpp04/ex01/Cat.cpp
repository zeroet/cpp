#include "Cat.hpp"

Cat::Cat()
{
	this->_Type = "Cat";
	_Brain = new Brain();
	std::cout << PURPLE << "[Cat] Constructor called" << FIN << std::endl;
	//_Brain = new Brain();
};

Cat::~Cat()
{
	delete _Brain;
	std::cout << PURPLE << "[Cat] Destructor called" << FIN << std::endl;
};

Cat::Cat(Cat const &rhs)
{
	*this = rhs;
	std::cout << YELLOW << "[Cat] copy Constructor called" << FIN << std::endl;
};

Cat &Cat::operator=(Cat const  &rhs)
{
	this->_Type = rhs._Type;
	*(this->_Brain) = *(rhs._Brain);
	std::cout << YELLOW << "[Cat] assignement fnc called" << FIN << std::endl;
	return (*this);
};

void	Cat::makeSound() const
{
	std::cout << BLUE << "[Cat] make sound fnc ##########" << FIN << std::endl;
};
