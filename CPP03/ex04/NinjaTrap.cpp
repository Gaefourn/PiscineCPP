#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_Hit_points = 60;
	_Max_hit_points = 60;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 5;
	_Armor_damage_reduction = 0;
	std::cout << _Name << " NINJA !" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	std::cout << _Name << " NINJA !" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &copy)
{
	(void)copy;
	std::cout << _Name << " NINJA !" << std::endl;
	return *this;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << _Name << " disparition !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << _Name << " utilise une technique speciale de ninja sur le ClapTrap " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << _Name << " utilise une technique speciale de ninja sur le FragTrap " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << _Name << " utilise une technique speciale de ninja sur le ScavTrap " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << _Name << " utilise une technique speciale de ninja sur le NinjaTrap " << target.getName() << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "Ninja " << _Name << " attaque " << target << " au corps a corps, lui infligeant " << _Melee_attack_damage << " points de degats." << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	
	std::cout << "Ninja " << _Name << " attaque " << target << " a distance, lui infligeant " << _Ranged_attack_damage << " points de degats." << std::endl;
}