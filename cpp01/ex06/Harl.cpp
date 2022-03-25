#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::complain( std::string level )
{
	void	(Harl::*fn[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i(-1);
	if ("DEBUG"== level)
		i = 0;
	else if ("INFO" == level)
		i = 1;
	else if ("WARNING" == level)
		i = 2;
	else if ("ERROR" == level)
		i = 3;

	switch (i)
	{	
		case 0:
			(this->*fn[0])();
		case 1:
			(this->*fn[1])();
		case 2:
			(this->*fn[2])();
		case 3:
			(this->*fn[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << COLOUR_Y << 
		"[ DEBUG ]\n" <<
		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n" <<
		"I really do !\n" << COLOUR_FIN << std::endl;
}

void	Harl::info(void)
{
	std::cout << COLOUR_G << 
		"[ INFO ]\n" <<
		"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger !\n"
		"If you did, I wouldn’t be asking for more !\n" << COLOUR_FIN << std::endl;
}

void	Harl::warning(void)
{
	std::cout << COLOUR_B << 
		"[ WARNING ]\n" <<
		"I think I deserve to have some extra bacon for free.\n"
		"I’ve been coming for years whereas you started working here since last month.\n" << COLOUR_FIN << std::endl;
}

void	Harl::error(void)
{
	std::cout << COLOUR_R << 
		"[ ERROR ]\n" <<
		"This is unacceptable,  I want to speak to the manager now.\n" << COLOUR_FIN << std::endl;
}


