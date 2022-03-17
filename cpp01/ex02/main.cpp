#include <iostream>
#include <string>

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_FIN "\033[0m"

int main()
{
	std::string str("HI THIS IS BRAIN.");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << COLOUR_Y;
	std::cout << &str << std::endl;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_G;
	std::cout << stringPTR << std::endl;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_R;
	std::cout << &stringREF << std::endl;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_Y;
	std::cout << str << std::endl;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_G;
	std::cout << *stringPTR << std::endl;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_R;
	std::cout << stringREF << std::endl;
	std::cout << COLOUR_FIN;


	return (0);
}
