#include "Conversion.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{	
		std::cout << RED << "ERROR : Arg == 1" << FIN << std::endl;
		return (1);
	}
	Conversion convert(av[1]);
	
	return (0);
}
