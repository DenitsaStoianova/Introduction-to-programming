// Task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number, count = 0, sum = 0;
	double averageSum = 0.0;

	do
	{
		cin >> number;
		if (number >= 1 && number <= 200)
		{
			count++;
			sum += number;
		}	

	} while (number >= 1);

	averageSum = (double)sum / (double)count;

	cout << "Numbers count: " << count << " Sum: " << sum << " AverageSum: " << averageSum << endl;
	return 0;
}
