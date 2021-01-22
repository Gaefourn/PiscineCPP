#include "Victim.hpp"

Victim::Victim(std::string name)
{
	_name = name;
	
	std::cout << "A random victim called " << _name  << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &copy)
{
	_name = copy._name;
	return (*this);
}

std::string Victim::getName(void) const
{
	return (_name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The victim " << _name << " died for no apparent reasons!" <<std::endl;
}

std::ostream &operator << (std::ostream &stream, Victim const &out)
{
	stream << "I'm " << out.getName() << " and I like otters!" << std::endl;
	return (stream);
	}