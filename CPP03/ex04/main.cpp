#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap Orga("O R G A 6 9");
	SuperTrap Super("John");
	
	Super.rangedAttack(" O R G A 6 9");
	Super.meleeAttack(" O R G A 6 9");
	Super.ninjaShoebox(Orga);
	Super.vaulthunter_dot_exe("O R G A 6 9");
	
	return (0);
}