#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria("Cure")
{}

Cure::Cure(const Cure &copy) : AMateria("Cure");
{
	_xp = copy._xp;
}

Cure &Cure::operator=(const Cure &copy)
{
	_xp = copy._xp;
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{}