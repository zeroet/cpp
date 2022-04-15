#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, const int & find)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw std::runtime_error(std::string("not found"));
	return (it);
}

#endif

