#include "Pony.hpp"

void	ponyOnTheStack(std::string name, int weight, float size)
{
	Pony	stackpony(name, weight, size);
}

Pony	*ponyOnTheHeap(std::string name, int weight, float size)
{
	Pony *heapony;
	
	heapony = new Pony(name, weight, size);
	return (heapony);
}
int	main()
{
	ponyOnTheStack("STACK_PONY", 200, 1.50);
	std::cout << "STACK_PONY est mort car nous sommes sortis de la fonction." << std::endl;
	Pony *Heap_Pony = ponyOnTheHeap("HEAP_PONY", 250, 1.70);
	std::cout << "HEAP_PONY va maintenant se faire detruire car on va appeler delete" << std::endl;
	delete Heap_Pony;
	return (0);
}