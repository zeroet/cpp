#include <iostream>
#include "FragTrap.hpp"

int main()
{
	std::cout << " == CONSTRUCTORS == " << std::endl;
	FragTrap a ("Arnold");
	FragTrap b;
	FragTrap c ("Warrior");

	std::cout << std::endl << " == A ACTIONS == " << std::endl;
	a.attack("Captain America");
	a.beRepaired(10);
	a.takeDamage(3);
	a.takeDamage(90);
	a.attack("Hulk");
	a.beRepaired(10);
	a.takeDamage(50);
	a.highFivesGuys();

	std::cout << std::endl << " == B ACTIONS == " << std::endl;
	b.attack("Iron Man");
	b.takeDamage(90);
	b.beRepaired(200);
	b.takeDamage(15);
	b.attack("Thor");
	b.highFivesGuys();

	std::cout << std::endl << " == C ENERGY TEST == " << std::endl;
	for (int i = 0; i < 101; i++)
		c.attack("ENERGY TEST");

	std::cout << std::endl << " == DESTRUCTORS == " << std::endl;

	return(0);

}
