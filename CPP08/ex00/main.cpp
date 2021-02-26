#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <string>

int main()
{
	std::list<int> list;
	
	for (int i = 0; i < 43 ; i++)
		list.push_back(i);
		
	std::list<int>::const_iterator aff;
	std::cout << "List :" << std::endl;
	for (aff = list.begin(); aff != list.end(); aff++)
		std::cout << *aff << std::endl;
		
	std::cout << "Try to find 6" << std::endl;
	try
	{
		std::cout << easyfind(list, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Easy find didnt find 6." << std::endl;
	}
	
	std::cout << "Try to find 42" << std::endl;
	try
	{
		std::cout << easyfind(list, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Easy find didnt find 35." << std::endl;
	}
	
	std::cout << "Try to find 60" << std::endl;
	try
	{
		std::cout << easyfind(list, 60) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Easy find didnt find 60." << std::endl;
	}
	
	
}