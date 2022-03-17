#include "HumanA.hpp"
#include "HumanB.hpp"

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_FIN "\033[0m"

int main()
{
	{
		std::cout << COLOUR_Y;
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << COLOUR_FIN;
	}
	{
		std::cout << COLOUR_G;
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << COLOUR_FIN;
	}
	return 0;
}
