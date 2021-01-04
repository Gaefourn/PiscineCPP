#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_bag[4];
	int _index;
public:
	Character(std::string const &name);
	Character(const Character &copy);
	Character &operator=(const Character &copy);
	
	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	
	~Character();
};

#endif