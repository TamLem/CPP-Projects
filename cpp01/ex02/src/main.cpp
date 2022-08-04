#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "memory address of of str: " << &str << std::endl
		<< "memory address held by stringPTR: " << stringPTR << std::endl
		<< "memory address held by stringREF: " << &stringREF << std::endl
		<< "value of str: " << str << std::endl
		<< "Value of stringPTR: " << stringPTR << std::endl
		<< "value of stringRef: " << stringREF << std::endl;
	return (0);
}