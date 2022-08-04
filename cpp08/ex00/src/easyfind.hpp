#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

#include <iostream>

class NotFoundException: public std::exception
{
	virtual const char* what() const throw()
	{
		return "element not found";
	}
};

template <typename T>
typename T:: iterator easyfind(T& vec, int tofind)
{
	for (typename T:: iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (*it == tofind)
			return (it);
	}
	throw NotFoundException();
};

#endif