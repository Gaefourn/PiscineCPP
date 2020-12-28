#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <string>

class Squad : public ISquad
{
private:

	int _current;
	ISpaceMarine **_units;
	
public:

	Squad();
	Squad(const Squad &copy);
	Squad &operator=(const Squad &copy);
	
	int getCount(void) const;
	ISpaceMarine* getUnit(int nb) const;
	int push(ISpaceMarine* unit);
	
	~Squad();
};

#endif