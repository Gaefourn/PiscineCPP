#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &copy);
	SuperTrap &operator=(const SuperTrap &copy);
	
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	
	~SuperTrap();

};

#endif