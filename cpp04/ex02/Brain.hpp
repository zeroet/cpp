#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

# define MAX_IDEAS 100

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"

class Brain 
{
private:
	std::string _Ideas[MAX_IDEAS];

public:
	Brain();
	~Brain();
	Brain(Brain const &rhs);
	Brain &operator=(Brain const &rhs);
//	void	setBrain(int i, std::string str);
//	std::string getBrain(int i) const;
};

#endif
