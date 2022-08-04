#include "Conversion.hpp"

// Constructorsv
Conversion::Conversion(string value)
{
	_value = value;
	_pseudoLiterals[0] = "inff";
	_pseudoLiterals[1] = "nanf";
	_pseudoLiterals[2] = "inf";
	_pseudoLiterals[3] = "nan";
	this->checkInput();
	// std::cout << "\e[0;33mDefault Constructor called of Conversion\e[0m" << std::endl;
}

Conversion::Conversion(const Conversion &copy)
{
	_value = copy.getValue();
	// std::cout << "\e[0;33mCopy Constructor called of Conversion\e[0m" << std::endl;
}

Conversion::~Conversion()
{
	// std::cout << "\e[0;31mDestructor called of Conversion\e[0m" << std::endl;
}


// Destructor
bool Conversion::checkInput()
{
	size_t	i = 0;
	bool	period = false;

	if (_value.length() == 0)
		return false;
	if (isalpha(_value[i]) && _value.length() == 1)
		return true;
	for (size_t i = 0; i < 4; i++)
	{
		if (_value.compare(this->_pseudoLiterals[i]) == 0 
			|| _value.substr(1, string::npos).compare(this->_pseudoLiterals[i]) == 0)
			return true;
	}
	if (_value[i] == '-' || _value[i] == '+')
		i++;
	while (_value[i])
	{
		if (!(isnumber(_value[i]) 
			|| (_value[i] == '.' && !period) 
				|| (_value[i] == 'f' && i == _value.length() - 1 )))
			throw Conversion::InputError();
		if(_value[i] == '.')
			period = true;
		i++;
	}
	return true;
}

type Conversion::checkType()
{
	char *p = nullptr;
	long res;
	std::string types[5] = {"char", "int", "float", "double", "unknown"};

	errno = 0;
	res = std::strtol(_value.c_str(), &p, 10);
	// std::cout << "errno " << errno << std::endl;
	if (res == 0 && strlen(p) == 1 && std::isalpha(*p))
		return CHAR;
	if (strlen(p) == 0)
		return INT;
	res = std::strtof(_value.c_str(), &p);
	if (strlen(p) == 1 && *p == 'f')
		return FLOAT;
	else
		return DOUBLE;
	if (std::strlen(p) > 1)
		throw Conversion::InputError();
	return UNKNOWN;
}

Conversion::operator char()
{
	int		val;
	type 	type = this->checkType();
	if (type == 0)
		return (this->_value[0]);
	else 
		val = (*this);
	if (val < 0 || val > 255)
		throw Conversion::NotExist();
	if (isprint(val) == 0)
		throw Conversion::NonPrintable();
	return (val);
}

Conversion::operator int()
{
	long int ret;
	char *p;
	
	p = nullptr;
	errno = 0;
	ret = std::strtol(this->_value.c_str(), &p, 10);
	if (errno == ERANGE || ret > INT_MAX || ret < INT_MIN 
		|| (ret == 0 && (_value[0] != '0' && _value[0] != '.')))
		throw Conversion::NotExist();
	return (ret);
}

Conversion::operator float()
{
	float ret;
	char *p;

	errno = 0;
	ret = std::strtof(this->_value.c_str(), &p);
	if (errno == ERANGE)
		throw Conversion::NotExist();
	return (ret);
}

Conversion::operator double()
{
	double	ret;
	char *p;

	errno = 0;
	ret = std::strtof(this->_value.c_str(), &p);
	if (errno == ERANGE)
		throw Conversion::NotExist();
	return (ret);
}


// Operators
Conversion & Conversion::operator=(const Conversion &assign)
{
	_value = assign.getValue();
	return *this;
}


// Getters / Setters
std::string Conversion::getValue() const
{
	return _value;
}

// Exceptions
const char * Conversion::NotExist::what() const throw()
{
	return "impossible";
}
const char * Conversion::NonPrintable::what() const throw()
{
	return "Non displayable";
}
const char * Conversion::InputError::what() const throw()
{
	return "contains unconvertable charachters";
}
