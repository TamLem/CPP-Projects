#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

// Constructors
Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName())
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	this->setGrade(grade);
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}


// Getters / Setters
const std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

// Exceptions
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade to high";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &crap)
{
	out << crap.getName() << ", bureaucrat grade " << crap.getGrade();
	return(out);
}


