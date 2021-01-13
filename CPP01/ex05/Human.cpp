#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

Brain &Human::getBrain(void)
{
	return(_brain);
}

Brain *Human::identify(void)
{
	return (_brain.identify());
}