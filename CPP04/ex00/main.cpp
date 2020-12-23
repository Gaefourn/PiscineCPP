#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main(void)
{
	Sorcerer clev("Clev", "The magnificent");
	
	std::cout << clev << std::endl;
	
	Victim orga("O R G A");
	Victim tmp = orga;
	Peon sweet("Sweet");
	Peon sweetCopy = sweet;
	Victim orgaCopy(orga);
	
	clev.polymorph(orga);
	clev.polymorph(sweet);
	clev.polymorph(sweetCopy);
	
	std::cout << orga << std::endl;
	
	return (0);
}