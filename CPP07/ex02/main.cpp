#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	Array<int>tab(5);
	
	std::cout << "Tab contains " << tab.size() << " cells.\n" << std::endl;
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		tab[i] = i;
		std::cout << "tab[" << i << "] = " << tab[i] << "\n";
	}
	std::cout << std::endl;
	
	Array <int> tab2 = tab;
	std::cout << "tab 2 = tab 1\n\n";
	for (unsigned int i = 0; i < tab2.size(); i++)
		std::cout << "tab[" << i << "] = " << tab[i] << "\n";
	std::cout << std::endl;
	try
	{
		std::cout << tab[-10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error, the index -10 doesn't exit !" << std::endl;
	}
	
	return 0;
}