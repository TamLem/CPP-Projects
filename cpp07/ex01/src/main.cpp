#include <iostream>
#include "template.hpp"

using std::cout;
using std::endl;
using std::string;

int main( void ) 
{
	int		arr[] = {1, 2, 3, 4, 5};
	char	str[] = "hello";
	iter(arr, 5, print);
	cout << endl;
	iter(str, 5, print);
	cout << endl;
	return 0;
}