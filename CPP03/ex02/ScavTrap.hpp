#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	

	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
	void meleeAttack(std::string const &traget);
	void rangedAttack(std::string const &target);
	void challengeNewcomer(void);

	~ScavTrap();
};

#endif