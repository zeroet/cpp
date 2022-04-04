#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	
	std::cout << std::endl;
	std::cout << "========== Constructor Test ==========" << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
	}


	Animal *animal[10];

	for (int i= 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Cat;
		else
		{
			if (i == 5)
				std::cout << std::endl;
			animal[i] = new Dog;
		}
	};

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "========== Destructor Test ==========" << std::endl;


	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			std::cout << std::endl;
		delete animal[i];
	}

	return (0);

/*
	Brain f;
	Brain *g = new Brain();

	for (int i = 0; i < 5; i++)
		f.setBrain(i, "HI");
	for (int i = 0; i < 5; i++)
		std::cout << f.getBrain(i) << std::endl;

	g = &f;
	for (int i = 0; i < 5; i++)
		std::cout << g->getBrain(i) << std::endl;
*/

};
