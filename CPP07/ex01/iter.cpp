#include <iostream>
#include <string>

template < typename T >

void iter(T *array, int size, void(*funct)(T const &))
{
	for (int i =0; i < size; i++)
		funct(array[i]);
}

template < typename T >

void funct(const T &var)
{
	std::cout << var <<  " ";
}

int main()
{
	char string []= "Bonjour";
	int tab[4] = {1, 2, 3, 4};
	
	iter<char>(string, 7, funct);
	
	std::cout << "\n" << std::endl;
	
	iter<int>(tab, 4, funct);
	
	std::cout << "\n" << std::endl;
	
	return 0;
}