#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

# define COLOUR_DEFAULT "\033[0;38;5;220m"
# define COLOUR_FIN "\033[0m"
# define COLOUR_STACK "\033[0;38;5;42m"
# define COLOUR_HEAP "\033[0;38;5;203m"

class Zombie {

private:
	std::string _nom;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	std::string getNom() const; 
	void		announce(void) const;
};

Zombie*			newZombie(std::string str);
void			randomChump(std::string str);

#endif
