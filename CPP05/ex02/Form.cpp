#include "Form.hpp"

Form::Form(std::string name, int req, int exe) :  _name(name),  _required(req), _exe(exe)
{
	if (req <1 || exe < 1)
		throw GradeTooHighException();
	if (req > 150 || exe > 150)
		throw GradeTooLowException();
	_sgn = false;
}

Form::Form(const Form &copy) : _name(copy.getName()), _required(copy.getGradeRequired()), _exe(copy.getGradeExe())
{
	*this = copy;
}

Form &Form::operator=(const Form &copy)
{
	_sgn = copy._sgn;
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

int Form::getGradeExe() const
{
	return  _exe;
}

int Form::getGradeRequired() const
{
	return _required;
}

Form::FormUnsigned::FormUnsigned()
{}

Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooLowException::GradeTooLowException()
{}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() > getGradeRequired())
		throw GradeTooLowException();
	std::cout << buro.getName() << " signs " << getName() << std::endl;
	_sgn = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form name : " << form.getName() << " required grade : " << form.getGradeRequired() << " signing grade : " << form.getGradeExe() << std::endl;
	return out;
}

const char *Form::FormUnsigned::what() const throw()
{
	return "Error, form unsigned";
}

void Form::execute(Bureaucrat const &executor) const
{
	if (_sgn == false)
		throw FormUnsigned();
	if (executor.getGrade() > _exe)
		throw GradeTooLowException();

	std::cout <<executor.getName() << " executs " << _name << std::endl;
}

bool Form::getSign() const
{
	return _sgn;
}

Form::~Form()
{}