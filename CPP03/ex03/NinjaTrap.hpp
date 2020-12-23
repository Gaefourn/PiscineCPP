#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	
	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(NinjaTrap &target);
	
	~NinjaTrap();
};

#endif