#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_Brain;

public:
	Cat();
	~Cat();
	Cat(Cat const  &rhs);
	Cat &operator=(Cat const  &rhs);

	void	makeSound() const;

};

#endif
