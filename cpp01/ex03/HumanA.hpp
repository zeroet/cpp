#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
	std::string _Name;
	Weapon &objet;

public:
	HumanA(std::string const &name, Weapon &objet);
	~HumanA();
	void	attack();
};

#endif
