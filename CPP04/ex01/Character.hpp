#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *_weapon;
	Character(void);
public:
	Character(std::string const &name);
	Character(const Character &copy);
	Character &operator=(const Character &copy);
	
	std::string getName() const;
	int getAP() const;
	AWeapon *getWeapon() const;
	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	~Character();
};

std::ostream& operator<<(std::ostream& os, const Character& out);

#endif