#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "sestructor called" << std::endl;
	return ;
}

