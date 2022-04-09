#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>

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
		const std::string _Input;
		const double _Value;
		bool _e;

	public:
		Conversion();
		Conversion(const std::string &str);
		~Conversion();
		Conversion(Conversion const &rhs);
		Conversion & operator=(Conversion const &rhs);

		const std::string & getInput() const;
		const double & getValue() const;
		bool getError() const;

		double toDouble() const;
		float toFloat() const;
		int	toInt() const;
		char toChar() const;
};

std::ostream& operator<<(std::ostream& o, const Conversion &rhs);

#endif
