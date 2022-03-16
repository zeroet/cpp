#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_FIN "\033[0m"

class Zombie {

private:
	std::string _nom;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	std::string getNom() const;
	void		setNom(std::string name);
	void		announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif
