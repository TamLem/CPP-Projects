
#ifndef __TEMPLATES__
# define __TEMPLATES__

# include <iostream>

template <typename T>
void print(T& toprint)
{
	std::cout << toprint;
}

template <typename T>
void iter(T *addr, size_t length, void func(T&))
{
	for (size_t i = 0; i < length; i++)
	{
		func(addr[i]);
	}
}

#endif