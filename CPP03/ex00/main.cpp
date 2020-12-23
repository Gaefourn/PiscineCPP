#include "FragTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap Orga("O R G A 6 9");
	FragTrap Lookr("Kralookix");
	
	Orga.rangedAttack("Kralookix");
	Lookr.takeDamage(20);
	Lookr.rangedAttack("O R G A 69");
	Orga.takeDamage(20);
	Lookr.meleeAttack("O R G A 69");
	Orga.takeDamage(30);
	Lookr.beRepaired(50);
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Orga.vaulthunter_dot_exe("Kralookix");
	Lookr.takeDamage(200);
	
	std::cout << "FR4G-TP O R G A 6 9 fais sa danse de la victoire mais trebuche et se brise la nuque" << std::endl;
	return (0);
}