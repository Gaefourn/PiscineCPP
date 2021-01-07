#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy.getName(), copy.getGradeRequired(), copy.getGradeExe())
{
	_target = copy.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	_target = copy.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}
RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::robotomize(Bureaucrat &buro)
{
	Form::execute(buro);
	std::cout << "*Driller noises brrrrrrrrrrrrrrrrrrrrrrr*" << std::endl;
	std::cout << getTarget() << " got robotomized !" << std::endl;
}