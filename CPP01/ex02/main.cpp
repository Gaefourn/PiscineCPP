#include "ZombieEvent.hpp"

int	main()
{
	Zombie one("Zombie", "Unicorn");
	ZombieEvent create;
	Zombie *two = create.newZombie("Zzoommbbiiee");
	Zombie *three[3];
	
	one.advert();
	two->advert();
	delete two;
	for (int i = 0; i < 3; i++)
	{
		three[i] = create.random();
		three[i]->advert();
		delete three[i];
	}
	return (0);
}