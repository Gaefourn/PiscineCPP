#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(std::string const &type);
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);
	
	AMateria *clone(void)const;
	void use(Icharacter &target);
	
	virtual ~Ice();
};

#endif