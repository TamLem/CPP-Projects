#include "Base.hpp"

// Constructors
Base::Base()
{
	// std::cout << "\e[0;33mDefault Constructor called of Base\e[0m" << std::endl;
}

Base::Base(const Base &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Base\e[0m" << std::endl;
}


// Destructor
Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}


// Operators
Base & Base::operator=(const Base &assign)
{
	(void) assign;
	return *this;
}

