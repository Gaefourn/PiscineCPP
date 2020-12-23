#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	
}

std::string		ZombieEvent::randomChump(void)
{
	std::string random;
	static const char pool [] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";
	int poolSize = sizeof(pool) - 1;
	
	srand(time(0));
	for (int i = 0; i < 10; i++)
		random += pool[rand() % poolSize];
	return (random);
}

std::string ZombieEvent::setZombieType(void)
{
	std::string type;
	std::cout << "Please set your zombie type" << std::endl;
	std::cin >> type;
	this->_type = type;
	return (this->_type);
}

Zombie *ZombieEvent::random(void)
{
	if (this->_type == "")
		this->_type = "Random";
	return(this->newZombie(ZombieEvent::randomChump()));
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, setZombieType()));
}