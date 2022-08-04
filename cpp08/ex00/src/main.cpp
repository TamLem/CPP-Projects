#include <iostream>
#include <vector>
#include "easyfind.hpp"

using std::cout;
using std::endl;
using std::vector;

int main( void ) 
{
	vector <int> nums;
	srand(time(NULL));
	for (size_t i = 0; i < 50; i++)
	{
		nums.push_back(rand() % 100);
	}
	// for (size_t i = 0; i < nums.size(); i++)
	// {
	// 	cout << nums[i] << ", ";
	// }
	cout << endl;
	try
	{
		cout << "your number: " << 13 << endl;
		vector<int>::iterator it = easyfind(nums, 13);
		cout << "found " << *it << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}