#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"


#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string _Type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	WrongAnimal& operator=(WrongAnimal const &rhs);

	std::string getType() const;
	void	makeSound() const;
};

#endif
