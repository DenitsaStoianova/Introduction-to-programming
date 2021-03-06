// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

double power(double num, int pow)
{
	if (pow == 0)
	{
		return 1;
	}

	if (pow < 0)
	{
		return 1.0 / power(num, -pow);
	}

	return num * power(num, pow - 1);
}

int main()
{
	double number;
	cin >> number;

	int pow;
	cin >> pow;

	cout << power(number, pow) << endl;

	return 0;
}
