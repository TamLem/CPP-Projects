#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
	public:
		// Constructors
		Base();
		Base(const Base &copy);
		
		// Destructor
		virtual ~Base();
		
		// Operators
		Base & operator=(const Base &assign);
		
	private:
		
};

#endif