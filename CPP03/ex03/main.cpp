#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap Orga("O R G A 6 9");
	FragTrap Lookr("Kralookix");
	ScavTrap Sweet("Sweetness");
	NinjaTrap NINJA("Naruto");
	
	Orga.rangedAttack("Kralookix");
	Lookr.takeDamage(20);
	Lookr.rangedAttack("O R G A 69");
	Orga.takeDamage(20);
	Lookr.meleeAttack("O R G A 69");
	Orga.takeDamage(30);
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Lookr.takeDamage(80);
	Lookr.beRepaired(50);
	Sweet.rangedAttack("O R G A 6 9");
	Orga.takeDamage(15);
	Sweet.meleeAttack("Kralookix");
	Lookr.takeDamage(20);
	Orga.meleeAttack("Swetness");
	Sweet.takeDamage(30);
	Sweet.beRepaired(100);
	Sweet.challengeNewcomer();
	Sweet.challengeNewcomer();
	Sweet.challengeNewcomer();
	Sweet.challengeNewcomer();
	NINJA.ninjaShoebox(Sweet);
	NINJA.ninjaShoebox(Orga);
	NINJA.ninjaShoebox(NINJA);
	
	return (0);
}