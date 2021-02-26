#include <iostream>
#include <cmath>

void printchar(std::string str)
{
	int i = std::stoi(str);
	char c = (char)i;
	
	if (isprint(c))
		std::cout << "char: " << static_cast<char> (c) << std::endl;
	else
		std::cout << "char: Non displayable "<< std::endl;
}

void printint(std::string str)
{
	std::size_t lastChar;
	int i = std::stoi(str, &lastChar, 10);
	
	std::cout << "int: " << static_cast<int> (i) << std::endl;
}

void printfloat(std::string str)
{
	std::size_t lastChar;
	float f = std::stof(str, &lastChar);
	
	std::cout << "float: " << static_cast<float> (f);
	if (roundf(f) == f)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void printdouble(std::string str)
{
	std::size_t lastChar;
	double d = std::stod(str, &lastChar);
	
	std::cout << "double: " << static_cast<double> (d);
	if (roundf(d) == d)
		std::cout << ".0";
	std::cout << std::endl;	
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error, wrong number of arguments !" << std::endl;
		return 0;
	}
	try
	{
		printchar(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: impossible" << '\n';
	}
	try
	{
		printint(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: impossible" << '\n';
	}
	try
	{
		printfloat(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "float: nanf" << '\n';
	}
	try
	{
		printdouble(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "double: nan" << '\n';
	}

	return 0;
}