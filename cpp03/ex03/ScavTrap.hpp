#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

private:
	bool _gate_keeper;

public:
	ScavTrap(void);
	ScavTrap(std::string const str);
	ScavTrap(const ScavTrap &rhs);
	ScavTrap& operator=(const ScavTrap &rhs);
	~ScavTrap(void);


	void	attack( const std::string &target);
	void	guardGate();
};

#endif
