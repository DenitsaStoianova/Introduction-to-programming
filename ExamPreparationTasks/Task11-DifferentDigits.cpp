// Task11-DifferentDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool containsDigit(int number, int digit)
{
	bool flag = false;
	do
	{
		if (number % 10 == digit)
		{
			flag = true;
		}
		number /= 10;

	} while (number != 0 && !flag);

	return flag;
}

bool areDigitsDifferent(int number)
{
	bool flag = true;

	while (number >= 10 && flag)
	{
		int lastDigit = number % 10;
		int otherDigits = number / 10;

		if (containsDigit(otherDigits, lastDigit))
		{
			flag = false;
		}

		number /= 10;
	}

	return flag;
}

int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;

	cout << areDigitsDifferent(number) << endl;

	return 0;
}
