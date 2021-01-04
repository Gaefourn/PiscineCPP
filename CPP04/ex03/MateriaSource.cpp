#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_sources[i] = 0;
	_current = 0;	
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	
}