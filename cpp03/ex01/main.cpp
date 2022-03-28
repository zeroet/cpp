#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getAttack());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getAttack());
	
	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getAttack());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getAttack());
	
	std::cout << std::endl;
	
	b.guardGate();
	
	std::cout << std::endl;
	return (0);
}
