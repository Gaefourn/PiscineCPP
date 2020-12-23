#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _Hit_points(100), _Max_hit_points(100),
_Energy_points(100), _Max_energy_points(100), _Level(1), _Melee_attack_damage(30),
_Ranged_attack_damage(20), _Armor_damage_reduction(5)
{
	std::cout << "FR4G-TP " << _name << " a ete creer" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attaque " << target << " a distance, causant "
		<< _Ranged_attack_damage << " points de degats !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attaque " << target << " au corps a corps, causant "
		<< _Melee_attack_damage << " points de degats !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int lol;
	
	lol = amount - _Armor_damage_reduction;
	if (lol < 0)
		lol = 0;
	_Hit_points -= lol;
	if (_Hit_points < 0)
		_Hit_points = 0;
	std::cout << "FR4G-TP " << _name << " se fait attaquer, subissant " << lol 
		<< " points de degats, ses HP sont desormais de " << _Hit_points << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_Hit_points += amount;
	if (_Hit_points > 100 )
		_Hit_points = 100;
	std::cout << "FR4G-TP " << _name << " se repare, gagnant " << amount << " HP, ses HP sont desormais de "
	<< _Hit_points << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_Energy_points < 25)
	{
		std::cout << "FR4G-TP " << _name << " a seulement " << _Energy_points <<
		" et ne peut donc pas utiliser sa competence vaulthunter_dot_exe." << std::endl;
		return ;
	}
	else
		_Energy_points -= 25;
	if ( _Energy_points < 0 )
	 _Energy_points = 0;
	 
	int value;
	std::string obj;
	value = rand() % 5;
	switch (value) {
		case 0: 
					obj = "une baguette magique";
					break ;
		case 1:
					obj = "un 9mm";
					break ;
		case 2:
					obj = "une batte de baseball";
					break ;
		case 3:
					obj = "un shuriken";
					break ;
		case 4:
					obj = "un poing americain";
					break ;
	}
	std::cout << "FR4G-TP " << _name << " a attaquer " << target << " avec "
	<< obj << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << " est mort." << std::endl;
}