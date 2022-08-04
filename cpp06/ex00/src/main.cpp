/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:59:19 by tlemma            #+#    #+#             */
/*   Updated: 2022/05/30 16:12:07 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <errno.h>
#include <iomanip>
#include "Conversion.hpp"

using std::cout;
using std::endl;
using std::string;

string printTrailingZero(float value)
{
	string ret = "";
	if (value - (int)value == 0)
		return ".0";
	return (ret);
}

string printTrailingZero(double value)
{
	string ret = "";
	if (value - (int)value == 0)
		return ".0";
	return (ret);
}

int main(int argc, char *argv[])
{
	char	charVal;
	int 	intVal;
	float	floatVal;
	double	doubleVal;
	type	type;

	cout.setf(std::ios::showbase);
	if (argc != 2 || argv[0] == NULL)
	{
		cout << "wrong number of inputs!\n";
		cout << "usage: ./convert <to_convert\n>";
		return (1);
	}
	try
	{
		Conversion input((string(argv[1])));
		type =  input.checkType();
		try
		{
			switch (type)
			{
				case 0: cout << "char: "; charVal = input; cout << "'" << charVal << "'" << endl; break;
				case 1: cout << "int: "; intVal = input; cout << intVal << endl; break;
				case 2: cout << "float: "; floatVal = input; cout << floatVal << printTrailingZero(floatVal) << 'f'<< endl;break;
				case 3: cout << "double: "; doubleVal = input; cout << doubleVal << printTrailingZero(doubleVal) << endl;break;
				case 4: break;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		if (type != 0)
		{
			cout << "char: ";
			try
			{
				charVal = (char)input;
				cout << "'" << charVal << "'" << endl;
			}
			catch(const std::exception& e)
			{
				cout << e.what() << '\n';
			}
		}
		if (type != 1)
		{
			cout << "int: ";
			try
			{
				intVal = (int)input;
				cout << intVal << endl;
			}
			catch(const std::exception& e)
			{
				cout << e.what() << '\n';
			}
		}
		if (type != 2)
		{
			cout << "float: ";
			try
			{
				floatVal = (float)input;
				cout << floatVal << printTrailingZero(floatVal) << 'f' << endl;
			}
			catch(const std::exception& e)
			{
				cout << e.what() << '\n';
			}
		}
		if (type != 3)
		{
			cout << "double: ";
			try
			{
				doubleVal = (double)input;
				cout << doubleVal << printTrailingZero(doubleVal) << endl;
			}
			catch(const std::exception& e)
			{
				cout << e.what() << '\n';
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
}