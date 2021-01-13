#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	
	Form* form1;
	Form* form2;
	Form* form3;
	Form* form4;
	
	form1 = someRandomIntern.makeForm("robotomy request", "Orga");
	std::cout << *form1 << std::endl;
	
	form2 = someRandomIntern.makeForm("presidential pardon", "Sweet");
	std::cout << *form2 <<std::endl;
	
	form3 = someRandomIntern.makeForm("shrubbery creation", "arbr");
	std::cout << *form3 << std::endl;
	
	form4 = someRandomIntern.makeForm("fail", "fail");

	return 0;
}