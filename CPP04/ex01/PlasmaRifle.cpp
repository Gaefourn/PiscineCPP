#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle",  5, 21 )
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy.getName(), copy.getAPCost(), copy.getDamage())
{
}

PlasmaRifle &PlasmaRifle::operator =(const PlasmaRifle &copy)
{
	_name = copy.getName();
	_apcost = copy.getAPCost();
	_damage = copy.getDamage();
	return *this;
} 

void PlasmaRifle::attack(void) const
{
	std::cout <<  "* piouuu piouuu piouuu *"  << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{}