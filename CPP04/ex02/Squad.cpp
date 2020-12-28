#include "Squad.hpp"

Squad::Squad()
{
	_current = 0;
	_units = new ISpaceMarine*[0];
}

Squad::Squad(const Squad &copy)
{
	*this = copy;
}

Squad &Squad::operator=(const Squad &copy)
{
	for (int i = 0 ; i < _current ; i++)
		delete _units[i];
	delete _units;
	_units = 0;
	_current = 0;
	for (int i = 0; i < copy.getCount(); i++)
		push(copy.getUnit(i)->clone());
	return *this;
}

int Squad::getCount(void) const
{
	return _current;
}

ISpaceMarine *Squad::getUnit(int nb) const
{
	if (nb < _current)
		return _units[nb];
	return 0;
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == 0)
		return 0;
	for (int i = 0; i < _current; i++)
		if (_units[i] == unit)
			return 0;
	ISpaceMarine **newsquad = new ISpaceMarine*[_current + 1];
	for (int i = 0; i < _current; i++)
		newsquad[i] = _units[i];
	newsquad[_current++] = unit;
	if (_units != 0)
		delete _units;
	_units = newsquad;
	return 1;
}

Squad::~Squad()
{
	for (int i = 0; i < _current; i++)
		delete _units[i];
	delete _units;
	_units = 0;
}