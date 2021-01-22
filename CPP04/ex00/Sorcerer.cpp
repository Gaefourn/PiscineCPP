#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}


Sorcerer::Sorcerer(const Sorcerer &copie)
{
	*this = copie;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &copie)
{
	_name = copie._name;
	_title = copie._title;
	return (*this);
}

std::string Sorcerer::getName(void) const
{
	return (_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (_title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator << (std::ostream &stream, Sorcerer const &out)
{
	stream << "I am " << out.getName() << ", " << out.getTitle() << ", and I like ponies !" << std::endl;
	return (stream);
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}