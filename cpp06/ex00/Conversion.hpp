#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cstring>

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"

class Conversion 
{
	private:
		std::string _Value;

	public:
		Conversion();
		Conversion(std::string str);
		~Conversion();
		Conversion(Conversion const &rhs);
		Conversion & operator=(Conversion const &rhs);

		std::string getValue() const;
		
		void	convertNum();

		int getInt() const;
		float getFloat() const;
		double getDouble() const;

		class Exception : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		

};

#endif
