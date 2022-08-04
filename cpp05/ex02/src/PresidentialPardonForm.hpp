#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm: public	Form
{
	public:
		// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		
		// Destructor
		~PresidentialPardonForm();
		
		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		
		// Getters / Setters
		virtual void execute(Bureaucrat const & executor) const;
		
	private:
		const std::string _target;
};

std::ostream & operator<<(std::ostream & out, const PresidentialPardonForm &PresidentialPardonForm);

#endif