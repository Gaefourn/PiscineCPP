#include <iostream>

int main()
{
	std::string*		panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
	return (0);
}