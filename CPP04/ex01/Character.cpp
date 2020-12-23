#include "Character.hpp"

Character::Character(std::string const &name)
{
	_name = name;
	_weapon = NULL;
	_ap = 40;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &copy)
{
	_ap = copy.getAP();
	_weapon = copy.getWeapon();
	_name = copy.getName();
	return *this;
}

 int Character::getAP() const
 {
	 return _ap;
 }
 
 std::string Character::getName() const
 {
	 return _name;
 }
 
 AWeapon *Character::getWeapon() const
 {
	 return _weapon;
 }
 
 void Character::recoverAP()
 {
	 _ap += 10;
	 _ap = _ap > 40 ? 40 : _ap;
	 std::cout << _name << " used recover and gained 10 APs." << _name << " has now " << _ap << " APs." << std::endl;
 }
 
 void Character::equip(AWeapon *weapon)
 {
	 _weapon = weapon;
 }
 
 void Character::attack(Enemy *enemy)
 {
	 if (_weapon == NULL)
	 {
		 std::cout << _name << " has no weapon, could not attack." << std::endl;
		 return ;
	 }
	 if ( _ap < _weapon->getAPCost() )
	 {
		 std::cout << _name << " has not enough APs, could not attack." << std::endl;
		 return ;
	 }
	 std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	 _weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	_ap = _ap - _weapon->getAPCost();
	_ap = _ap < 0 ? 0 : _ap;
	if (enemy->getHP() <= 0)
		delete enemy;
 }
 
 std::ostream& operator<<(std::ostream& os, const Character& out)
 {
	 (void) out;
	 os << out.getName() << " has " << out.getAP() << " AP and ";
	 if (out.getWeapon() == NULL)
	 	os << "is unarmed";
	else
		os << "carries " << out.getWeapon()->getName();
	os << std::endl;	
	return os;
 }
 
 Character::~Character()
 {}