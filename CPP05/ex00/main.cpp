#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat ari("Mainox", 1);
	
	std::cout << ari;
	try
	{
		ari.incrementGrade();
		std::cout << "Trying to increment grade" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Cannot change grade : " << e.what() << std::endl;
	}
	try
	{
		ari.setGrade(160);
		std::cout << "Trying to set grade at 160" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot change grade : " << e.what() << std::endl;
	}
	try
	{
		ari.setGrade(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << ari;
	
	return 0;
}