#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_Brain;

public:
	Dog();
	~Dog();
	Dog(Dog const &rhs);
	Dog &operator=(Dog const &rhs);

	void	makeSound() const;

};

#endif

