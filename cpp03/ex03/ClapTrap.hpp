#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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

class ClapTrap {

protected:
	std::string _Name;
	int _Hit_Point;
	int _Energy_Point;
	int _Attack_Point;

public:
	ClapTrap(void);
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &rhs);
	ClapTrap& operator=(const ClapTrap &rhs);
	~ClapTrap();

	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amout );
	
<<<<<<< HEAD
	void setEnergy(int num);
	
=======
	void	setHit(int num);
>>>>>>> 6001177debe56e3d92119c25671de0bc67de911f
	int	getHit() const;
	int	getEnergy() const;
	int	getAttack() const;
	std::string	getName() const;
};

#endif
