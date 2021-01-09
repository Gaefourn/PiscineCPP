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
	class FormUnsigned : public std::exception
	{
		public:
			FormUnsigned(void);
			const char* what() const throw();
	};
	Form(std::string name, int req, int exe);
	Form(const Form &copy);
	Form &operator=(const Form &copy);
	
	std::string getName() const;
	bool getSign() const;
	int getGradeRequired() const;
	int getGradeExe() const;
	void beSigned(Bureaucrat &buro);
	virtual void execute(Bureaucrat const &executor) const;
	
	virtual ~Form();
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif