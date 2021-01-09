#include "Intern.hpp"

static Form *PresidentForm(std::string target);
static Form *RobotForm(std::string target);
static Form *ShrubberyForm(std::string name);

Intern::Intern()
{}

Intern::Intern(const Intern &copy)
{
	operator=(copy);
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

static Form *PresidentForm(std::string name)
{
	PresidentialPardonForm *form;
	form = new PresidentialPardonForm(name);
	return form;
}

static Form *RobotForm(std::string name)
{
	RobotomyRequestForm *form;
	form = new RobotomyRequestForm(name);
	return form;
}

static Form *ShrubberyForm(std::string name)
{
	ShrubberyCreationForm *form;
	form = new ShrubberyCreationForm(name);
	return form;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	typedef Form* (*form_funct)(std::string target);
	form_funct function[3];
	function[0] = &ShrubberyForm;
	function[1] = &PresidentForm;
	function[2] = &RobotForm;
	
	std::string formname[3];
	formname[0] = "shrubbery creation";
	formname[1] = "presidential pardon";
	formname[2] = "robotomy request";
	
	for (int i =0; i < 3; i++)
	{
		if (formname[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return function[i](target);
		}
	}
	std::cout << "Intern couldnt create this form, only existing forms are : shrubbery creation; presidential pardon; robotomy request; \n Please try again. " << std::endl;
	return 0;
}