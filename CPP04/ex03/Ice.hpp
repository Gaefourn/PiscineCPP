#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);
	
	AMateria *clone(void)const;
	void use(ICharacter &target);
	
	virtual ~Ice();
};

#endif