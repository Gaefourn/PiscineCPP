#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <stdlib.h>

class FragTrap
{
private:
		std::string _name;
		int _Hit_points, _Max_hit_points, _Energy_points, _Max_energy_points,
		_Level, _Melee_attack_damage, _Ranged_attack_damage, _Armor_damage_reduction;
public:
	FragTrap(std::string name);
	
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &traget);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
	
	~FragTrap();
};

#endif