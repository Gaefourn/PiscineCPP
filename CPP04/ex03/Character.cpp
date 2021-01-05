#include "Character.hpp"

Character::Character(std::string const &name)
{
	_name = name;
	_index = 0;
	for (int i = 0; i < 4; i++)
		_bag[i] = 0;
}

Character::Character(const Character &copy)
{
	_name = copy._name;
	_index = 0;
	for (int i = 0; i < copy._index; i++)
		equip(copy._bag[i]->clone());
	for (int i = _index; i < 4; i++)
		_bag[i] = 0;
}

Character &Character::operator=(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < _index; i++)
		delete _bag[i];
	_index = 0;
	for (int i = 0; i < copy._index; i++)
		equip(copy._bag[i]->clone());
	for (int i = _index; i < 4; i++)
		_bag[i] = 0;
	return *this;
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (m == 0)
		return ;
	if (_index == 4)
		return;
	for (int i = 0; i < _index; i++)
		if (_bag[i] == m)
			return ;
	_bag[_index++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >=_index || _bag[_index] == 0)
		return ;
	for (int i = idx; i < 3; i++)
	{
		_bag[i] = _bag[i + 1];
		_bag[i + 1] = 0;
	}
	_index--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= _index || _bag[idx] == 0)
		return ;
	_bag[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < _index; i++)
	{
		delete _bag[i];
		_bag[i] =0;
	}
}