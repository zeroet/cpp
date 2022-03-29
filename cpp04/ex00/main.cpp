#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	Animal* a = new Animal;
	Animal* b = new Cat;
	Animal *c = new Dog;

	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	
	a->makeSound();
	b->makeSound();
	c->makeSound();

	delete a;
	delete b;
	delete c;

	std::cout << std::endl;
	std::cout << "============ Wrong Animal ================" << std::endl;
	std::cout << std::endl;
 
	WrongAnimal *d = new WrongAnimal;
	WrongAnimal *e = new WrongCat;

	std::cout << d->getType() << " " << std::endl;
	std::cout << e->getType() << " " << std::endl;
	
	d->makeSound();
	e->makeSound();

	delete d;
	delete e;


};
