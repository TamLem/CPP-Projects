#include <iostream>
#include "template.hpp"

using std::cout;
using std::endl;

int	my_test(void)
{
	{
		int x = 1;
		int y = 2;

		cout << "x: " << x << ", y: " << y << endl;
		swap(x, y);
		cout << "x: " << x << ", y: " << y << endl;
		swap(x, y);
		cout << "min: " << min(x ,y) << endl;
		cout << "max: " << max(x, y) << endl;
	}

	{
		double x = 1.2;
		double y = 2.2;

		cout << "x: " << x << ", y: " << y << endl;
		swap(x, y);
		cout << "x: " << x << ", y: " << y << endl;
		swap(x, y);
		cout << "min: " << min(x ,y) << endl;
		cout << "max: " << max(x, y) << endl;
	}

	{
		float x = 3.02f;
		float y = 4.02f;

		cout << "x: " << x << ", y: " << y << endl;
		swap(x, y);
		cout << "x: " << x << ", y: " << y << endl;
		swap(x, y);
		cout << "min: " << min(x ,y) << endl;
		cout << "max: " << max(x, y) << endl;		
	}
	return 0;
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}