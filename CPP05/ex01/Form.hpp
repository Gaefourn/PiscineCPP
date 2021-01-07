#ifndef FORM_HPP
#define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _sgn;
	const int _required;
	const int _exe;
public:
	class GradeTooHighException : public std::exception
	{
		public :
			GradeTooHighException(void);
			const char*  what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public :
			GradeTooLowException(void);
			const char*  what() const throw();
	};
	Form(std::string name, int req, int exe);
	Form(const Form &copy);
	Form &operator=(const Form &copy);
	
	std::string getName() const;
	int getGradeRequired() const;
	int getGradeExe() const;
	void beSigned(Bureaucrat &buro);
	
	~Form();
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif