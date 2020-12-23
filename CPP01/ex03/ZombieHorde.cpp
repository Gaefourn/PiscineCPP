#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nb)
{
	Zombie *zombies[nb];
	this->_nb = nb;
	
	srand(time(0));
	for (int i = 0; i < nb; i++)
	{
		zombies[i] = newZombie();
		this->_zombies[i] = zombies[i];
		this->_random.clear();
	}	
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_nb; i++)
		this->_zombies[i]->advert();
}

std::string		ZombieHorde::randomChump(void)
{
	static const char pool [] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";
	int poolSize = sizeof(pool) - 1;
	
	for (int i = 0; i < 10; i++)
		this->_random += pool[rand() % poolSize];
	return (this->_random);
}

std::string ZombieHorde::setZombieType(void)
{
	std::string type;
	std::cout << "Please set your zombie type" << std::endl;
	std::cin >> type;
	this->_type = type;
	return (this->_type);
}

Zombie *ZombieHorde::newZombie(void)
{
	std::string name = randomChump();
	return (new Zombie(name, "Horde"));
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "The zombie horde will now be destroyed" << std::endl;
	for (int i = 0; i < this->_nb; i++)
		delete this->_zombies[i];
}