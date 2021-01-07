#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy.getGrade();
	return *this;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

std::string Bureaucrat::getName(void) const
{
	return _name;
}

void Bureaucrat::incrementGrade(void)
{
	setGrade(getGrade() - 1);
}

void Bureaucrat::decrementGrade(void)
{
	setGrade(getGrade() + 1);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const  throw()
{
	return "Grade is too low !";
}

std::ostream&operator<<(std::ostream &out, const Bureaucrat &buro)
{
	out << buro.getName() << ", bureaucrat grade " << buro.getGrade() << "." << std::endl;
	return out;
}
Bureaucrat::~Bureaucrat()
{}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cant sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::execForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " tried to execute " << form.getName() << " but couldnt because " << e.what() << '\n';
	}
	if (_grade <= form.getGradeExe() && form.getSign() == true)
		std::cout << _name << " executs " << form.getName() << std::endl;
}