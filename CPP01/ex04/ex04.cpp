#include <string>
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *lol = &string;
	std::string &mdr = string;
	
	std::cout << *lol << "\n" << mdr << std::endl;
	return (0);
}