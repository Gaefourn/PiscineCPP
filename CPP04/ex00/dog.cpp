#include "dog.hpp"

dog::dog(std::string name) : Victim(name)
{
	std::cout << "Woof ! " << std::endl;
}

dog::dog(const dog &copy) : Victim(copy)
{
	*this = copy;
}

dog &dog::operator=(const dog &copy)
{
	_name = copy._name;
	return *this;
}

void dog::getPolymorphed() const
{
	std::cout << _name << " was polymorphed into a cat ! Meooow" << std::endl;
}

dog::~dog()
{}