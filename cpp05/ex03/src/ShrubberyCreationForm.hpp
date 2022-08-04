#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public	Form
{
	public:
		// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		
		// Destructor
		~ShrubberyCreationForm();
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		
		// Getters / Setters
		virtual void execute(Bureaucrat const & executor) const;
		
	private:
		const std::string _target;
};

std::ostream & operator<<(std::ostream & out, const ShrubberyCreationForm &ShrubberyCreationForm);

#endif