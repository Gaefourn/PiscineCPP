#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_Name = name;
	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 50;
	_Max_energy_points = 50;
	_Level = 1;
	_Melee_attack_damage = 20;
	_Ranged_attack_damage = 15;
	_Armor_damage_reduction = 3;
	std::cout << "SC4V-TP " << _Name << " vient de rejoindre la partie." <<
	" Il est level " << _Level << " et possede " << _Max_energy_points << " points d'energie et " <<
	_Max_hit_points << " HPs." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "SC4V-TP " << _Name << " vient de rejoindre la partie." <<
	" Il est level " << _Level << " et possede " << _Max_energy_points << " points d'energie et " <<
	_Max_hit_points << " HPs." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	(void)copy;
	std::cout << "SC4V-TP " << _Name << " vient de rejoindre la partie." <<
	" Il est level " << _Level << " et possede " << _Max_energy_points << " points d'energie et " <<
	_Max_hit_points << " HPs." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << _Name << " vient de quitter la partie." << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << _Name << " utilise son pistolet a eau sur " << target << " *PIOU PIOU* "
		<< target << " subis " << _Ranged_attack_damage << " points de degats !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << _Name << " attaque bureau des pleurs sur  " << target << " en lui mettant des tapes sur l'epaule, lui infligeant "
		<< _Melee_attack_damage << " points de degats !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int lol;
	
	lol = amount - _Armor_damage_reduction;
	if (lol < 0)
		lol = 0;
	_Hit_points -= lol;
	if (_Hit_points < 0)
		_Hit_points = 0;
	std::cout << "SC4V-TP " << _Name << " se fait attaquer, subissant " << lol 
		<< " points de degats, ses HP sont desormais de " << _Hit_points <<
		", et "<< _Name << " fais desormais les gros yeux !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_Hit_points += amount;
	if (_Hit_points > 100 )
		_Hit_points = 100;
	std::cout << "SC4V-TP " << _Name << " fais une sieste, gagnant " << amount << " HP, ses HP sont desormais de "
	<< _Hit_points << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	int choice;
	std::string challenge;

	if (_Energy_points < 25)
	{
		std::cout << "SC4V-TP " << _Name << " a seulement " << _Energy_points <<
		"  point d'energie et ne peut donc pas utiliser sa competence vaulthunter_dot_exe." << std::endl;
		return ;
	}
	else
		_Energy_points -= 25;
	if ( _Energy_points < 0 )
	 _Energy_points = 0;
	
	choice = rand() % 5;
	switch(choice){
		case 0:
					challenge = "Fais moi a manger ! Et pas de la bouffe de cantine !";
					break ;
		case 1:
					challenge = "Allez hop, sors le chien !";
					break ;
		case 2:
					challenge = "Vas faire la vaisselle esclave !";
					break ;
		case 3:
					challenge = "Descends voir dans la boite aux lettres si j'ai pas recu mon colis !";
					break ;
		case 4:
					challenge = "Tu arretes de vivre a 22h comme ca je peux dormir tranquille.";
					break ;
	}	
	 std::cout <<  _Name << " : Voici un defi pour toi O R G A 6 9 : " << challenge << " Et pas de ouin ouin merci !"
	 << std::endl;
}