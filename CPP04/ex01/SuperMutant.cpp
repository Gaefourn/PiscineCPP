#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy.getHP(), copy.getType())
{}

SuperMutant &SuperMutant::operator=(const SuperMutant &copy)
{
	_hp = copy.getHP();
	_type = copy.getType();
	return *this;
}

void SuperMutant::takeDamage(int amount)
{
/*	int newamount;
	
	newamount = ((amount - 3) < 0 ? 0 : (amount - 3));
	_hp -= newamount;
	_hp = (_hp < 0 ? 0 : _hp);
	std::cout << _type << " took some damages and has now " << _hp << " HPs." << std::endl;
*/
	Enemy::takeDamage(amount - 3);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}