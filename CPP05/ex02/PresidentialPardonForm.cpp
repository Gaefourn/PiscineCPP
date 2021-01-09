#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy.getName(), copy.getGradeRequired(), copy.getGradeExe())
{
	_target = copy.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	_target = copy.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat &buro) const
{
	Form::execute(buro);
	std::cout << getTarget() << " was forgiven by Zafod Beeblebrox" << std::endl;
}