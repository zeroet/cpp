#include <iostream>

int main()
{
	int i = 10;
	int j = 20;
	int *ptr = &i;
	int &num = j;

	std::cout << *ptr << std::endl;
	std::cout << num << std::endl;
 	j = 50;
	std::cout << num << std::endl;
	num = 100;
	std::cout << j << std::endl;

}
