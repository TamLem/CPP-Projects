#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		Array()
		{
			_elements = 0;
			_length = 0;
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
		}
		Array(unsigned int n)
		{
			_length = n;
			_elements = new T[_length];
			std::cout << "\e[0;33mDefault param Constructor called of Array\e[0m" << std::endl;
		}
		Array(const Array &copy)
		{
			_elements = NULL;
			(*this) = copy;
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}

		// Destructor
		~Array()
		{
			if (_elements != NULL)
				delete[] _elements;
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
		}

		// Operators
		Array<T> & operator=(const Array &assign)
		{
			if (_elements != nullptr)
				delete[] _elements;
			_elements = new T[assign._length];
			_length = assign._length;
			for (size_t i = 0; i < _length; i++)
			{
				_elements[i] = assign._elements[i];
			}
			std::cout << "\e[0;33mAssigment Constructor called of Array\e[0m" << std::endl;
			return *this;
		}

		T& operator[](int index)
		{
			if (index >= 0 && index < (int)_length)
				return (this->_elements[index]);
			else
				throw std::out_of_range("invalid index");
		}

		// Getters / Setters
		T* getElements() const
		{
			return _elements;
		}

		size_t size() const
		{
			return (_length);
		}

	private:
		size_t _length;
		T* _elements;
};

#endif