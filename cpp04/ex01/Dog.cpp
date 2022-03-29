#include "Dog.hpp"

Dog::Dog()
{
	this->_Type = "Dog";
	std::cout << YELLOW << "[Dog] Constructor called" << FIN << std::endl;
};

Dog::~Dog()
{
	std::cout << YELLOW << "[Dog] Destructor called" << FIN << std::endl;
};

Dog &Dog::operator=(Dog const &rhs)
{
	this->_Type = rhs._Type;
	std::cout << YELLOW << "[Dog] assignement fnc called" << FIN << std::endl;
	return *this;
};

Dog::Dog(Dog const  &rhs)
{
	*this = rhs;
	std::cout << YELLOW << "[Dog] copy Constructor called" << FIN << std::endl;
};

void	Dog::makeSound() const
{
	std::cout << PINK << "[Dog] make sound fnc **********" << FIN << std::endl;
};

