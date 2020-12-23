#include "Human.hpp"

Brain &Human::getBrain(void)
{
	return(_brain);
}

Brain *Human::identify(void)
{
	return (_brain.identify());
}