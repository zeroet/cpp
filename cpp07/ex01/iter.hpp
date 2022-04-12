#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	printArry(T &str)
{
	std::cout << str << std::endl;
}

template <typename T, typename U>
void	iter(T arry[], int size, U fnc)
{
	for (int i = 0; i < size; i++)
		fnc(arry[i]);
}

#endif
