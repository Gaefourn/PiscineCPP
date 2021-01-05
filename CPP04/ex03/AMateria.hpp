#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
class AMateria;
#include "Character.hpp"
#include "ICharacter.hpp"

class AMateria
{
protected:
	unsigned int _xp;
	std::string	_type;
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &copy);
	
	std::string const &getType(void) const;
	unsigned int getXP() const;
	
	virtual AMateria *clone(void) const = 0;
	virtual void use (ICharacter &target);

	virtual ~AMateria(void);
};

#endif