#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

using std::vector;

class Span
{
	public:
		// Constructors
		Span(int n);
		Span(const Span &copy);
		Span(vector<int> nums, unsigned int n);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		
		//Methods
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		vector<int> & getNums();

		
		//add an exception class	
		class OutOfRangeException : public std::exception
		{
			virtual const char * what() const throw();
		};
		class NotEnoughNumbers : public std::exception
		{
			virtual const char * what() const throw();
		};
	private:
		vector<int> _nums;
		unsigned int _n;
		
};

#endif