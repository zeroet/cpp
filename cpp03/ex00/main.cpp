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
	playerB.beRepaired(400);
	playerB.attack("John");
	playerB.attack("John");
	playerB.takeDamage(400);
	playerB.attack("John");
	playerB.attack("John");
	playerB.beRepaired(10);
	playerB.attack("John");
	playerB.attack("John");
	playerB.takeDamage(11);
	playerB.beRepaired(10);

	ClapTrap playerC("C");
	playerC.attack("John");
	playerC.beRepaired( 20 );
	playerC.getHit();
	playerC.takeDamage(15);
	playerC.takeDamage(200);
	playerC.takeDamage(25);
	return (0);
};
