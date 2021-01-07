#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat buro("Mainox", 26);
	Form form("Prenuptial", 15, 6);
	
	std::cout << buro << std::endl;
	std::cout << form << std::endl;
	try
	{
		form.beSigned(buro);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot sign contract grade too low" << e.what() << '\n';
	}
	buro.setGrade(2);
	try
	{
		buro.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form should be signed" << e.what() << '\n';
	}
	
	return 0;
}