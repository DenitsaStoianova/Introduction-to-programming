// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool equalDigits(int num)
{
	bool flag = true;

	while (num >= 10)
	{
		int lastDigit = num % 10;
		int otherDigits = num / 10;

		bool containsDigit = false;

		do
		{
			if (lastDigit == otherDigits % 10)
			{
				containsDigit = true;
			}
			otherDigits /= 10;

		} while (otherDigits != 0 && !containsDigit);

		if (containsDigit)
		{
			flag = false;
		}

		num /= 10;
	}

	return flag;
}

int main()
{
	// Дали цифрите на едно естествено число са различни:

	int number;
	cin >> number;

	cout << equalDigits(number) << endl;

	return 0;
}
