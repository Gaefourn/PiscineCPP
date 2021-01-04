#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(std::string const &type);
	Cure(const Cure &copy);
	Cure &operator=(const Cure &copy);
	
	AMateria *clone() const;
	void use(ICharacter &target);
	
	virtual ~Cure();
};

#endif