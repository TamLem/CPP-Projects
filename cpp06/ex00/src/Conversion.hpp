#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <errno.h>

enum type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

using std::cout;
using std::endl;
using std::string;

class Conversion
{
	public:
		// Constructors
		// Conversion();
		Conversion(const Conversion &copy);
		Conversion(std::string value);
		
		// Destructor
		~Conversion();
		
		// Operators
		Conversion & operator=(const Conversion &assign);
		operator char();
		operator int();
		operator float();
		operator double();
		
		
		// Getters / Setters
		std::string getValue() const;

		//methods
		bool checkInput();
		type checkType();
			
		
		// Exceptions
		class NotExist : public std::exception {
			virtual const char* what() const throw();
		};
		class NonPrintable : public std::exception {
			virtual const char* what() const throw();
		};
		class InputError : public std::exception {
			virtual const char* what() const throw();
		};

		
	private:
		std::string _value;
		std::string _pseudoLiterals[4];
		
};

#endif