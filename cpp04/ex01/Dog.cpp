#include "Dog.hpp"

Dog::Dog()
{
	this->_Type = "Dog";
	_Brain = new Brain();
	std::cout << PINK << "[Dog] Constructor called" << FIN << std::endl;
};

Dog::~Dog()
{
	delete _Brain;
	std::cout << PINK << "[Dog] Destructor called" << FIN << std::endl;
};

Dog &Dog::operator=(Dog const &rhs)
{
	this->_Type = rhs._Type;
	*(this->_Brain) = *(rhs._Brain);
	std::cout << YELLOW << "[Dog] assignement fnc called" << FIN << std::endl;
	return *this;
};

Dog::Dog(Dog const  &rhs)
{
	_Brain = new Brain();
	*this = rhs;
	std::cout << YELLOW << "[Dog] copy Constructor called" << FIN << std::endl;
};

void	Dog::makeSound() const
{
	std::cout << PINK << "[Dog] make sound fnc **********" << FIN << std::endl;
};

