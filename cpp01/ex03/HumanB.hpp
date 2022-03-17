#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

private:
	std::string _Name;
	Weapon *weapon;

public:
	HumanB(std::string const name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
