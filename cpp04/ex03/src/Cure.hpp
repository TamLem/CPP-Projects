#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);
		Cure(std::string type);
		
		// Destructor
		~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);
		
		// Getters / Setters
		std::string getType() const;

		//Methods
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif