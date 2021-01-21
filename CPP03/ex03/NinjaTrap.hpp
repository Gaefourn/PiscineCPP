#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &copy);
	NinjaTrap &operator=(const NinjaTrap &copy);
	
	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(NinjaTrap &target);
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	
	~NinjaTrap();
};

#endif