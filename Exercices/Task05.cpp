// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Зад. Да се провери дали всички четни числа в даден интервал
    // съдържат нечетна цифра

	int a, b;
	cin >> a >> b;

	bool flagForAllDigits = true;

	int number = (a % 2 == 0 ? a : a + 1);
	for (int i = number; i <= b && !flagForAllDigits; i += 2)
	{
		int currentNumberCopy = i;

		bool flagForOddDigit = false;
		while (currentNumberCopy && !flagForOddDigit)
		{
			int lastDigit = currentNumberCopy % 10;

			if (lastDigit % 2 != 0)
			{
				flagForOddDigit = true;
			}

			currentNumberCopy /= 10;
		}

		if (!flagForOddDigit)
		{
			flagForAllDigits = false;
		}
	}

	cout << (flagForAllDigits ? "Yes" : "No") << endl;
	return 0;
}
