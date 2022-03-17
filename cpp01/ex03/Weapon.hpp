#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string const  &str);
	~Weapon();

	void	setType(std::string const &str);
	std::string const &getType(void) const;
};

#endif
