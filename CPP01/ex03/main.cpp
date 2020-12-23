#include "ZombieHorde.hpp"

int main()
{
	std::cout << "A zombie horde is rising" << std::endl;
	ZombieHorde horde(8);
	horde.announce();
	return (0);
}