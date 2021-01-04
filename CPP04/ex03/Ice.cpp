#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria("Ice")
{}

Ice::Ice(const Ice &copy) : AMateria("Ice")
{
	_xp = copy._xp;
}

Ice &Ice::operator=(const Ice &copy)
{
	_xp = copy._xp;
	return *this;
}

AMateria *Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{}