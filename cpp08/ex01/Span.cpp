#include "Span.hpp"

Span::Span(void) : _max(0) { }

Span::Span(unsigned int N) : _max(N), _v(0) { }

Span::Span(Span const &rhs)
{
	*this = rhs;
}

Span::~Span(void) { }

Span & Span::operator=(Span const & rhs)
{
	_max = rhs.getMax();
	_v = rhs.getV();
	return *this;
}

unsigned int Span::getMax() const
{
	return (this->_max);
}

std::vector<int> const &Span::getV() const 
{
	return (this->_v);
}

void	Span::addNumber(int nbr)
{
	if (this->_v.size() >= this->_max)
		throw Span::Max();
	this->_v.push_back(nbr);
}

int Span::shortestSpan(void) 
{
	std::vector<int>::iterator it;
	int	shortest = INT_MAX;

	if (_v.size() <= 1)
		throw Span::Distance();

	std::sort(_v.begin(), _v.end());

	for (it = _v.begin() + 1; it != _v.end(); it++) 
	{
		if (*it - *(it - 1) < shortest)
			shortest = *it - *(it - 1);
	}
	return (shortest);
}

int Span::longestSpan(void) 
{
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> diff;

	if (_v.size() < 2)
		throw Span::Distance();
	diff.first = std::min_element(_v.begin(), _v.end());
	diff.second = std::max_element(_v.begin(), _v.end());

	return *(diff.second) - *(diff.first);
}

