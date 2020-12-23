#ifndef PLASMARIFLE_HPP
#define PLSAMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &copy);
	PlasmaRifle &operator=(const PlasmaRifle &copy);
	
	void attack(void) const;

	virtual ~PlasmaRifle();
};

#endif