#include "Animal.hpp"

Animal::Animal() :_Type("Animal")
{
	std::cout << YELLOW << "[Animal] Constructor called" << FIN << std::endl;
};

//Animal::Animal(std::string str)
//{
//	std::cout << YELLOW << "[Animal] Constructor called" << FIN << std::endl;
//};

Animal::~Animal()
{
	std::cout << YELLOW << "[Animal] Destrutor called" << FIN << std::endl;
};

Animal::Animal(Animal const &rhs)
{
	*this = rhs;
	std::cout << YELLOW << "[Animal] copy constructor called" << FIN << std::endl;
};

Animal &Animal::operator=(Animal const &rhs)
{
	this->_Type = rhs._Type;
	std::cout << YELLOW << "[Animal] assignement called" << FIN << std::endl;
	return (*this);
};

std::string Animal::getType() const
{
	return (this->_Type);
};

void	Animal::makeSound() const
{
	std::cout << GREEN << "[Animal] make sound fnc ----------" << FIN << std::endl;
};
