#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap playerA("A");

	ClapTrap playerB(playerA);
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.beRepaired(400);
	playerB.attack("P");
	playerB.attack("P");
	playerB.takeDamage(400);
	playerB.attack("John");
	playerB.attack("P");
	playerB.attack("P");
	playerB.attack("P");
	playerB.beRepaired(10);
	playerB.attack("P");
	playerB.attack("P");
	playerB.takeDamage(11);
	playerB.beRepaired(10);

	ClapTrap playerC("C");
	playerC.attack("P");
	playerC.beRepaired( 20 );
	playerC.getHit();
	playerC.takeDamage(15);
	playerC.takeDamage(200);
	playerC.takeDamage(25);
	return (0);
};
