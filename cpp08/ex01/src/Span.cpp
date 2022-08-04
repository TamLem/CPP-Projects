#include "Span.hpp"
#include <algorithm>

// Constructors
Span::Span(int n): _n(n)
{
	// _nums = 0;
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	(*this) = copy;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}

Span::Span(vector<int> nums, unsigned int n)
{
	_nums = nums;
	_n = n;
	std::cout << "\e[0;33mFields Constructor called of Span\e[0m" << std::endl;
}

// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}

// Operators
Span & Span::operator=(const Span &assign)
{
	_nums = assign._nums;
	_n = assign._n;
	return *this;
}

void Span::addNumber(int n)
{
	if (_nums.size() < this->_n)
		this->_nums.push_back(n);
	else
		throw Span::OutOfRangeException();
}

//Exceptions
const char * Span::OutOfRangeException::what() const throw()
{
	return "out of range";
}

const char * Span::NotEnoughNumbers::what() const throw()
{
	return "not enough numbers";
}

int Span::shortestSpan()
{
	int	shortestSpan;

	if (_nums.size() < 2)
		throw Span::NotEnoughNumbers();
	if (_nums.size() == 2)
		return abs(_nums[0] - _nums[1]);
	vector<int> sorted = _nums;
	sort(sorted.begin(), sorted.end());
	for (vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++)
	{
		if (it == sorted.begin())
			shortestSpan =  abs(*it - *(++it));
		else
		{
			int tempSpan =  abs(*it - *(++it));
			if (tempSpan < shortestSpan)
				shortestSpan = tempSpan;
		}
	}
	return (shortestSpan);
}

int Span::longestSpan()
{
	int	longestSpan = 0;

	if (_nums.size() < 2)
		throw Span::NotEnoughNumbers();
	if (_nums.size() == 2)
		return abs(_nums[0] - _nums[1]);
	vector<int> sorted = _nums;
	sort(sorted.begin(), sorted.end());
	longestSpan = abs(sorted.front() - sorted.back());
	return (longestSpan);
}

vector<int>& Span::getNums()
{
	return _nums;
}
