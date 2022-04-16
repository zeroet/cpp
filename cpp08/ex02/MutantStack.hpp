#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <stack>
#include <string>
#include <iostream>

template< typename T>
class MutantStack : public std::stack<T> 
{
	public:
		MutantStack(void) { }
		MutantStack(MutantStack<T> const &rhs) 
		{
			*this = rhs;
		}
		~MutantStack(void) { }
	
		MutantStack<T>& operator=(MutantStack<T> const &rhs) 
		{
    		std::stack<T>::operator=(rhs);
			return (*this);
		}
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void) 
		{
			return (this->c.begin()); //deque -> protected memeber object c 
		}
		iterator	end(void) 
		{
			return (this->c.end()); //deque -> protected memeber object c
		}
};

#endif
