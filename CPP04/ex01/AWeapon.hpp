#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
protected:
	std::string _name;
	int _damage;
	int _apcost;
	
public:

	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &copy);
	AWeapon &operator=(const AWeapon &copy);
	
	std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;
	
	virtual ~AWeapon();
private :
	AWeapon();
};

#endif