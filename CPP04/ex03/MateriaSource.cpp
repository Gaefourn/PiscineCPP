#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_sources[i] = 0;
	_current = 0;	
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	_current = 0;
	for (int i = 0; i < copy._current; i++)
		learnMateria(copy._sources[i]->clone());
	for (int i = _current; i < 4; i++)
		_sources[i] = 0;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < copy._current; i++)
		delete _sources[i];
	_current = 0;
	for (int i = 0; i < copy._current; i++)
		learnMateria(copy._sources[i]->clone());
	for (int i = 0; i < 4; i++)
		_sources[i] = 0;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m == 0 || _current == 4)
		return ;
	for (int i = 0; i < _current; i++)
		if(_sources[i] == m)
			return ;
	_sources[_current++] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _current; i++)
	{
		if (_sources[i]->getType() == type)
			return (_sources[i]->clone());
	}
	return 0;
}


MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _current; i++)
	{
		delete _sources[i];
		_sources[i] = 0;
	}
}