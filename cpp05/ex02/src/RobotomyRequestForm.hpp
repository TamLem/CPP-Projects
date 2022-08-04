#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public	Form
{
	public:
		// Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		
		// Destructor
		~RobotomyRequestForm();
		
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		
		// Getters / Setters
		virtual void execute(Bureaucrat const & executor) const;
		
	private:
		const std::string _target;
};

std::ostream & operator<<(std::ostream & out, const RobotomyRequestForm &RobotomyRequestForm);

#endif