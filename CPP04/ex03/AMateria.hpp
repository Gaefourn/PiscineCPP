#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria
{
protected:
	unsigned int _xp;
	std::string	_type;
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &copy);
	
	std::string const &getType() const;
	unsigned int getXP() const;
	
	virtual AMateria *clone() const = 0;
	virtual void use (ICharacter &target);

	~AMateria();
};

#endif