#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(const Data &copy);
		Data(int value);
		
		// Destructor
		~Data();
		
		// Operators
		Data & operator=(const Data &assign);
		
		// Getters / Setters
		int getValue() const;
		
	private:
		int _value;
		
};

#endif