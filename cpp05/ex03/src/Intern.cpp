#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

Form *Intern::makeForm(std::string formName, std::string target)
	{
		Form	*avaliableForms[3] = 
			{new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target) };
		std::string avaliableFormsNames[] = { "p form", "r form", "s form"};

		for (size_t i = 0; i < 3; i++)
		{
			if (formName == avaliableFormsNames[i])
				return avaliableForms[i];
			delete avaliableForms[i];
		}
		std::cout << formName + " not found\n";
		return NULL;
	}