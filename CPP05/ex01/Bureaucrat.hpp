#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
class Bureaucrat;
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat
{
private:
	int _grade;
	const std::string _name;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &copy);
	
	int getGrade(void) const;
	std::string getName(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	void setGrade(int grade);
	void signForm(Form &form);
	~Bureaucrat();
	class GradeTooLowException : public std::exception
	{
		public :
			GradeTooLowException(void);
			const char* what() const throw();	
	};
	class GradeTooHighException : public std::exception
	{
		public :
			GradeTooHighException(void);
			const char* what() const throw();	
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &buro);

#endif