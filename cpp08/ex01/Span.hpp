#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Span
{
	private:
		unsigned int _max;
		std::vector<int> _v;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &rhs);
		~Span(void);

		Span &operator=(Span const &rhs);
		

		void			addNumber(int nbr);
		int	shortestSpan(void);
		int	longestSpan(void);

		unsigned int	getMax() const;
		std::vector<int> const  &getV() const;

		class Max : public std::exception
		{
			public:
				const char *what(void) const throw()
				{
					return ("Error: Attempt to put index out of range");
				}
		};

		class Distance : public std::exception
		{
			public:
				const char *what(void) const throw()
				{
					return ("Error: Not enought numbers to calculate span");
				}
		};
};

#endif
