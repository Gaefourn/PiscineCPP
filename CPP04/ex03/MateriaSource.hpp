#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int _current;
	AMateria *_sources[4];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &copy);
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
	virtual ~MateriaSource(void);
};

#endif