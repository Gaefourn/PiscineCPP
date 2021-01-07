#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat				mainox("Mainox", 1);
	Bureaucrat				gaytan("Gaytan", 150);
	ShrubberyCreationForm	form1("Arbr");
	RobotomyRequestForm		form2("Orga");
	PresidentialPardonForm	form3("Sweet");

	mainox.signForm(form1);
	mainox.signForm(form2);
	mainox.signForm(form3);
	mainox.execForm(form1);
	mainox.execForm(form2);
	mainox.execForm(form3);
	gaytan.execForm(form1);
	gaytan.execForm(form2);
	gaytan.execForm(form3);
	return (0);
}