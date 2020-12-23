#include "Pony.hpp"

Pony::Pony(std::string name, int weight, float size)
{
	std::cout << "Pony name: " <<
	name << " , pony weight: " <<
	weight << " , pony size: " << size << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Destructeur bonjour !" << std::endl;
}