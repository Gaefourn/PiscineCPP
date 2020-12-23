#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &copy)
{
	_name = copy._name;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}