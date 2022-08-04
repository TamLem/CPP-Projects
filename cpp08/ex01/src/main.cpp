#include <iostream>
#include "Span.hpp"

using std::cout;
using std::endl;
using std::string;

//generate a Span object of random numbers with n elements
Span generateSpan(int n)
{
	srand(time(NULL));
	Span span(n);
	for (int i = 0; i < n; i++)
		span.addNumber(rand() % 1000);
	return span;
}

//print span
void printSpan(Span &span)
{
	cout << "span: ";
	for (vector<int>::iterator it = span.getNums().begin(); it != span.getNums().end(); it++)
		cout << *it << " ";
	cout << endl;
}


int main( void ) 
{
	Span sp1 = generateSpan(100000);
	try
	{
		printSpan(sp1);
		std::cout << "shorest span: " << sp1.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp1.longestSpan() << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}