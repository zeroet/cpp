#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::complain( std::string level )
{
	void	(Harl::*fn[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string complain_str[4] = {"debug", "info", "warning", "error"};

	for (int i(0); i < 4; i++)
	{
		if (complain_str[i] == level)
		{	
			(this->*fn[i])();
			return;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << COLOUR_Y << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << COLOUR_FIN << std::endl;
}

void	Harl::info(void)
{
	std::cout << COLOUR_G << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << COLOUR_FIN << std::endl;
}

void	Harl::warning(void)
{
	std::cout << COLOUR_B << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << COLOUR_FIN << std::endl;
}

void	Harl::error(void)
{
	std::cout << COLOUR_R << "This is unacceptable ! I want to speak to the manager now." << COLOUR_FIN << std::endl;
}


