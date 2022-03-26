#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string const str);
	FragTrap (FragTrap const &rhs);
	FragTrap& operator=(FragTrap const  &rhs);
	~FragTrap(void);

	void	highFivesGuys(void);
};

#endif
