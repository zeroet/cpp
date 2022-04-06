#include "Conversion.hpp"

int main(int ac, char **av)
{
	Conversion tmp;

	try
	{
		if (ac != 2)
			tmp.Arg();
	}
	catch (const std::exception &e)
	{	
		std::cerr << e.what() << FIN << std::endl;
//		tmp.~Conversion();
		exit(0);
	}
		
	
	Conversion convert(av[1]);
	std::cout << convert.getValue() << std::endl;
	std::cout << convert.getInt() << std::endl;	
	std::cout << convert.getFloat() << "f" <<  std::endl;
	std::cout << convert.getDouble() << ".0" <<  std::endl;

	return (0);
}
