#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string _Name;
		int _Hit_points, _Max_hit_points, _Energy_points, _Max_energy_points,
		_Level, _Melee_attack_damage, _Ranged_attack_damage, _Armor_damage_reduction;
public:
	ClapTrap(std::string name);
	
	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &traget);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	~ClapTrap();
};

#endif