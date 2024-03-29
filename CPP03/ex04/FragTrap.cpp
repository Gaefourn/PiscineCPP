#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_Name = name;
	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 100;
	_Max_energy_points = 100;
	_Level = 1;
	_Melee_attack_damage = 30;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << _Name << " a ete creer, il possede "
	<< _Max_energy_points << " HP et est level " << _Level << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FR4G-TP " << _Name << " a ete creer, il possede "
	<< _Max_energy_points << " HP et est level " << _Level << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	(void)copy;
	std::cout << "FR4G-TP " << _Name << " a ete creer, il possede "
	<< _Max_energy_points << " HP et est level " << _Level << std::endl;
	return *this;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _Name << " attaque " << target << " a distance, causant "
		<< _Ranged_attack_damage << " points de degats !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _Name << " attaque " << target << " au corps a corps, causant "
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
	std::cout << "FR4G-TP " << _Name << " se fait attaquer, subissant " << lol 
		<< " points de degats, ses HP sont desormais de " << _Hit_points << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_Hit_points += amount;
	if (_Hit_points > _Max_hit_points )
		_Hit_points = _Max_hit_points;
	std::cout << "FR4G-TP " << _Name << " se repare, gagnant " << amount << " HP, ses HP sont desormais de "
	<< _Hit_points << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_Energy_points < 25)
	{
		std::cout << "FR4G-TP " << _Name << " a seulement " << _Energy_points <<
		" point d'energie et ne peut donc pas utiliser sa competence vaulthunter_dot_exe." << std::endl;
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
	std::cout << "FR4G-TP " << _Name << " a attaquer " << target << " avec "
	<< obj << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _Name << " est mort." << std::endl;
}