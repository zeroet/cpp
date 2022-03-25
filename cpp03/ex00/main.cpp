#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap playerA("A");

	ClapTrap playerB(playerA);
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.takeDamage(400);
	playerB.beRepaired(10);
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.attack("John");
	playerB.takeDamage(11);
	playerB.beRepaired(10);

	ClapTrap playerC("C");
	playerC.attack("John");
	std::cout << playerC.getEnergy() << std::endl;
	playerC.beRepaired( 20 );
	playerC.getHit();
	playerC.takeDamage(15);
	return (0);
};
