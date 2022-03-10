#include <iostream>

int main(void)
{
	char buff[512];

	std::cout << "Hello world!" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered [ " << buff << "]" << std::endl;
	std::cerr << "Hello" << std::endl;
	return 0;
}
