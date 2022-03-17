#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_B "\033[0;38;5;21m"
# define COLOUR_FIN "\033[0m"

class Karen {

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Karen();
	~Karen();

	void	complain( std::string level );
};

#endif
