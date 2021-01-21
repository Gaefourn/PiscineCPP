#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_Name = name;
	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;
	std::cout << "ClapTrap " << _Name << " est apparu !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	_Name = copy._Name;
	_Hit_points = copy._Hit_points;
	_Max_hit_points = copy._Max_hit_points;
	_Energy_points = copy._Energy_points;
	_Max_energy_points = copy._Max_energy_points;
	_Level = copy._Level;
	_Melee_attack_damage = copy._Melee_attack_damage;
	_Ranged_attack_damage = copy._Ranged_attack_damage;
	_Armor_damage_reduction = copy._Armor_damage_reduction;
	
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _Name << " appartient desormais au passe !" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << _Name << " attaque " << target << " a distance, causant "
		<< _Ranged_attack_damage << " points de degats !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << _Name << " attaque " << target << " au corps a corps, causant "
		<< _Melee_attack_damage << " points de degats !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int lol;
	
	lol = amount - _Armor_damage_reduction;
	if (lol < 0)
		lol = 0;
	_Hit_points -= lol;
	if (_Hit_points < 0)
		_Hit_points = 0;
	std::cout << "CL4P-TP " << _Name << " se fait attaquer, subissant " << lol 
		<< " points de degats, ses HP sont desormais de " << _Hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_Hit_points += amount;
	if (_Hit_points > _Max_hit_points )
		_Hit_points = _Max_hit_points;
	std::cout << "CL4P-TP " << _Name << " se repare, gagnant " << amount << " HP, ses HP sont desormais de "
	<< _Hit_points << std::endl;
}

std::string ClapTrap::getName()
{
	return _Name;
}