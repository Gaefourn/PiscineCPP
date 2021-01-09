#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("ShrubberyCreationForm", 145, 137)
{
	_filename = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy.getName(), copy.getGradeRequired(), copy.getGradeExe())
{
	_filename = copy.getFilename();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	_filename = copy.getFilename();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

std::string ShrubberyCreationForm::getFilename() const
{
	return _filename;
}

void ShrubberyCreationForm::execute(const Bureaucrat &buro) const
{
	std::string filename = _filename + "_shrubbery";
	std::fstream file;
	
	Form::execute(buro);
	file.open(filename, std::fstream::out | std::fstream::app | std::fstream::in);
	std::string tree =  "      ._\\/_."
	 "\n"
		"      . /\\ ."
	 "\n"
		"      . /\\ ."
	 "\n"
		"     . /  \\ ."
	 "\n"
		"    . /~~~~\\o ."
	 "\n"
		"   . /o     \\ ."
	 "\n"
		"  . /~~*~~~~\\ ."
	"\n"
		" . o/    o   \\ ."
	 "\n"
		" . /~~~~~~~~~ \\~` ."
	 "\n"
		". /__*_________\\ ."
	 "\n"
		"      . || ."
	 "\n"
		"    . \\====/ ."
	 "\n"
		"     . \\__/  .";
	file << tree;
	file.close();
}
