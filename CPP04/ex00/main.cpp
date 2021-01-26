#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "dog.hpp"

int main(void)
{
	{
		Sorcerer clev("Clev", "The magnificent");
	
		std::cout << clev << std::endl;
		
		Victim orga("O R G A");
		Victim tmp = orga;
		Peon sweet("Sweet");
		Peon sweetCopy = sweet;
		Victim orgaCopy(orga);
		dog chien("Dog");
		
		clev.polymorph(orga);
		clev.polymorph(sweet);
		clev.polymorph(sweetCopy);
		clev.polymorph(chien);
		
		std::cout << orga << std::endl;
	}
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		
		std::cout << robert << jim << joe;
		
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	
	return (0);
}