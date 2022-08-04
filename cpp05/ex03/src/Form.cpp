/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:48:04 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/05 18:23:20 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form():_name("default"), _isSigned(false), _gradeToSign(50), _gradeToExec(30)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExec): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}


Form::Form(const Form &copy): _name(copy.getName()), _isSigned(copy.getIsSigned()),
	 _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string name): _name(name), _isSigned(false), _gradeToSign(50), _gradeToExec(30)
{
	std::cout << "\e[0;33mName Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

// Exceptions
const char * Form::GradeTooHighException::what() const throw()
{
	return "grade to high";
}
const char * Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

// Getters / Setters
const std::string Form::getName() const
{
	return _name;
}
bool Form::getIsSigned() const
{
	return _isSigned;
}
int Form::getGradeToSign() const
{
	return _gradeToSign;
}
int Form::getGradeToExec() const
{
	return _gradeToExec;
}

bool Form::beSigned(Bureaucrat &crap)
{
	if (crap.getGrade() < _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
	return (true);
}

std::ostream & operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", grade to sign " << form.getGradeToSign()
		<< ", grade to execute " << form.getGradeToExec() << (form.getIsSigned() ? " is signed" : " is not signed");
	return(out);
}
