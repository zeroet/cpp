#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"

// si je veux vraiment utilser class abstraite, Sauf le Constructor, faites tout les fonction dans le class un fonction  vrai abstraite. Enfin il a l'air vraiment comme une Interface en cpp 

class Animal 
{
protected:
	std::string _Type;

public:
	Animal();
//	Animal(std::string str);
	virtual ~Animal();
	Animal& operator=(Animal const  &rhs);
	Animal(Animal const  &rhs);

	virtual void	makeSound() const = 0;
	std::string getType() const;	

private:
};

#endif
