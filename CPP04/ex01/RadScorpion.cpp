#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy.getHP(), copy.getType())
{}

RadScorpion &RadScorpion::operator=(const RadScorpion &copy)
{
	_hp = copy.getHP();
	_type = copy.getType();
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}