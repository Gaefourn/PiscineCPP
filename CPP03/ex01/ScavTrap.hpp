#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
private:
	std::string _Name;
	int _Hit_points, _Max_hit_points, _Energy_points, _Max_energy_points, _Level,
	_Melee_attack_damage, _Ranged_attack_damage, _Armor_damage_reduction;
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