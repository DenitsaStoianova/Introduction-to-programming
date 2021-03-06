// Task10-isPowerOf2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isPowerOf2(int num)
{
	if (num == 1)
	{
		return true;
	}

	return num % 2 == 0 && isPowerOf2(num / 2);
}

int main()
{
	int number;
	cin >> number;

	cout << isPowerOf2(number) << endl;

	return 0;
}
