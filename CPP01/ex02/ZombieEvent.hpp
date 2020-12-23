#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public :
	
	ZombieEvent();
	std::string setZombieType(void);
	std::string		randomChump(void);
	Zombie *newZombie(std::string name);
	Zombie *random(void);
	
	private :
	
	std::string _type;
};

#endif