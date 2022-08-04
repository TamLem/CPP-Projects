#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <ostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		// Getters / Setters
		const std::string getName() const;
		int getGrade() const;
		void setGrade(int grade);

		//methods
		void signForm(Form & form);
		void executeForm(Form const & form);
		
		// Exceptions
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		const std::string _name;
		int _grade;
		
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat &crap);


#endif