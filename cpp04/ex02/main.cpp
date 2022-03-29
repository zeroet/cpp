#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
//	Animal a;

	Animal *b = new Cat;
	Animal *c = new Dog;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	b->makeSound();
	c->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	delete b;
	delete c;

	return (0);
};
