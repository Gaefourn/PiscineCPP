#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &copy);
	Intern &operator=(const Intern &copy);
	
	Form* makeForm(std::string name, std::string target);
	~Intern();
};

#endif