#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public Claptrap {

private:
	std::string _Name;
	int	_Hit_Point;
	int _Energy_Point;
	int _Attack_Point;

public:
	ScavTrap(void);
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &rhs);
	SacavTrap& operator=(const SacavTrap &rhs);
	~ScavTrap(void);

	void	guardGate();
};

#endif
