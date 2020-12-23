#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}


AWeapon::AWeapon( const AWeapon &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &copy)
{
	_apcost = copy._apcost;
	_damage = copy._damage;
	_name = copy._name;
	return *this;
}

std::string AWeapon::getName(void) const
{
	return _name;
}

int AWeapon::getDamage(void) const
{
	return _damage;
}

int AWeapon::getAPCost(void) const
{
	return _apcost;
}

AWeapon::~AWeapon()
{}