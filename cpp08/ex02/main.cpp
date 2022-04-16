#include "MutantStack.hpp"
#include <list>

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
		std::cout << std::endl;

	std::cout << std::endl;
	std::cout << ORANGE << "========== Test projet ==========" << FIN <<std::endl;
	std::cout << std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << YELLOW << ".top() : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << YELLOW << ".size() : " << mstack.size() << std::endl;
	std::cout << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << YELLOW << "Iterator : " <<  *it << FIN << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	}

	{
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << ORANGE << "========== Test char ==========" << FIN <<std::endl;
	std::cout << std::endl;
	
	MutantStack<char> mstack;

	mstack.push('a');
	mstack.push('b');
	std::cout << YELLOW << ".top() : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << YELLOW << ".size() : " << mstack.size() << std::endl;
	std::cout << std::endl;
	mstack.push('c');
	mstack.push('d');
	mstack.push('f');
//[...]
	mstack.push('g');
	MutantStack<char>::iterator it = mstack.begin();
	MutantStack<char>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << YELLOW << "Iterator : " <<  *it << FIN << std::endl;
		++it;
	}
	}


	{
	std::cout << std::endl;
	std::cout << ORANGE << "========== Test List compare ==========" << FIN <<std::endl;
	std::cout << std::endl;
	
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);
	std::cout << YELLOW << ".top() : " << list.back() << std::endl;
	list.pop_back();
	std::cout << YELLOW << ".size() : " << list.size() << std::endl;
	std::cout << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
//[...]
	list.push_back(0);
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << YELLOW << "Iterator : " <<  *it << FIN << std::endl;
		++it;
	}

	std::list<int> s_list(list);
	}


	return (0);
}
