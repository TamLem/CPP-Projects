#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
	    typedef std::stack<T> stack;
		typedef typename std::stack<T>::container_type::iterator iterator;
		// Constructors
		MutantStack(): stack()
		{};
		MutantStack(const MutantStack &copy): stack(copy)
		{};
		
		// Destructor
		~MutantStack(){};
		
		MutantStack & operator=(const MutantStack &assign)
		{
			this->stack::operator=(assign);
			return *this;
		};

		iterator begin()
		{
			return stack::c.begin();
		}
		iterator end()
		{
			return stack::c.end();
		}
};

#endif