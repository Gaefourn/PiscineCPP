#include "Classes.hpp"
#include <iostream>

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}


void identify_from_reference(Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
	}
}

int main()
{
	Base *a = new A();
	Base *c = new C();
	Base &ref = *c;
	
	identify_from_pointer(a);
	identify_from_reference(ref);

	return 0;
}