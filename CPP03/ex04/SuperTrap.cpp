#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	_Hit_points = FragTrap::_Hit_points;
	_Max_hit_points = FragTrap::_Max_hit_points;
	_Energy_points = NinjaTrap::_Energy_points;
	_Max_energy_points = NinjaTrap::_Max_energy_points;
	_Level = 1;
	_Name = name;
	_Melee_attack_damage = NinjaTrap::_Melee_attack_damage;
	_Ranged_attack_damage = FragTrap::_Ranged_attack_damage;
	_Armor_damage_reduction = FragTrap::_Armor_damage_reduction;
	std::cout << _Name << " : Bonjour, je suis un super trap !" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << _Name << " : Super disparition !" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}