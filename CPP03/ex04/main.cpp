#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(0));
	NinjaTrap NINJA("Naruto");
	NinjaTrap copy = NINJA;
	NinjaTrap copy2(copy);
	SuperTrap super("SUPERTRAP");
	
	std::cout << "Operator = name : " << copy.getName() << std::endl;
	std::cout << "Copy constructor name: " << copy2.getName() << std::endl;
	
	super.meleeAttack("O R G A 6 9");
	super.rangedAttack("Sweetness");
	super.vaulthunter_dot_exe("Kralookix");
	super.ninjaShoebox(NINJA);
	
	return (0);
}