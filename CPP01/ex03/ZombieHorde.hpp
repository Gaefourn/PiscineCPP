#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	public :
	
	ZombieHorde(int nb);
	std::string setZombieType(void);
	std::string		randomChump(void);
	void	announce(void);
	Zombie *newZombie(void);
	Zombie *random(void);
	~ZombieHorde();
	
	private :
	
	std::string _type;
	std::string _random;
	int _nb;
	Zombie *_zombies[8];
};

#endif