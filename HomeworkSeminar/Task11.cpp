// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number, numbersCount = 0, sum = 0;

	do
	{
		cin >> number;

		if (number < 10 || number > 99)
		{
			continue;
		}

		numbersCount++;
		sum += number;

		if (numbersCount == 5 || sum >= 234)
		{
			break;
		}

	} while (numbersCount < 5 || sum < 234);

	cout << numbersCount << " " << sum << endl;

	return 0;
}
