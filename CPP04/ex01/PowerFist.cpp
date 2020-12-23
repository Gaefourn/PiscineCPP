#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy.getName(), copy.getAPCost(), copy.getDamage())
{}

PowerFist &PowerFist::operator=(const PowerFist &copy)
{
	_name = copy.getName();
	_apcost = copy.getAPCost();
	_damage = copy.getDamage();
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM ! *" << std::endl;
}

PowerFist::~PowerFist()
{}