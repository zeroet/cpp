#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"


int main(void)
{
	{
		int Arry[] = { 10, 20, 30, 40 };
	
		std::vector<int> IntVector(Arry, Arry + 4);
		std::cout << GREEN << "========== MyVector ==========" << std::endl;
		std::cout << "[ " <<  IntVector[0] << ", " << IntVector[1] << ", " << IntVector[2] <<
			", " << IntVector[3] << " ]" << std::endl;
		std::cout << std::endl;
		std::vector<int>::iterator it = easyfind(IntVector, 20);
		std::cout << YELLOW << "[easyfind] IntVector // try 20" << FIN << std::endl;
		std::cout << BLUE << "Iterator Retrun : " << *it << FIN << std::endl;
		std::cout << std::endl;
		try
		{	
			std::cout << YELLOW << "[easyfind] IntVector // try 100" << std::endl;
			it = easyfind(IntVector, 100);
		}
		catch (std::exception &)
		{	
			std::cerr << RED << "ERROR : Iterator OutofBound"  << std::endl;
		}
	}

	{
		std::cout << std::endl;
		std::cout << GREEN << "========== MyList ==========" << std::endl;
		std::cout << std::endl;
		
		std::list<int> IntList;
		IntList.push_back(10);
		IntList.push_back(20);
		IntList.push_back(30);
		IntList.push_back(40);
		
		std::list<int>::iterator it = easyfind(IntList, 30);
		std::cout << YELLOW << "[easyfind] IntList// try 30" << FIN << std::endl;
		std::cout << BLUE << "Iterator Retrun : " << *it << FIN << std::endl;
		std::cout << std::endl;

		try
		{	
			std::cout << YELLOW << "[easyfind] IntList // try 200" << std::endl;
			it = easyfind(IntList, 200);
		}
		catch (std::exception &)
		{	
			std::cerr << RED << "ERROR : Iterator OutofBound"  << std::endl;
		}
	}

	{
		std::cout << std::endl;
		std::cout << GREEN << "========== MyDeque ==========" << std::endl;
		std::cout << std::endl;
		
		std::deque<int> IntDeque;
		IntDeque.push_back(10);
		IntDeque.push_back(20);
		IntDeque.push_back(30);
		IntDeque.push_back(40);
		
		std::deque<int>::iterator it = easyfind(IntDeque, 40);
		std::cout << YELLOW << "[easyfind] IntDeque// try 40" << FIN << std::endl;
		std::cout << BLUE << "Iterator Retrun : " << *it << FIN << std::endl;
		std::cout << std::endl;

		try
		{	
			std::cout << YELLOW << "[easyfind] IntDeque // try 42" << std::endl;
			it = easyfind(IntDeque, 200);
		}
		catch (std::exception &)
		{	
			std::cerr << RED << "ERROR : Iterator OutofBound"  << std::endl;
		}
	}


	return (0);
}


