// Task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number, digitsCounter = 0;

	do
	{
		cin >> number;

	} while (number < 10 || number > 30000);

	while (number != 0)
	{
		number /= 10;
		++digitsCounter;
	}

	cout << digitsCounter << endl;

	return 0;
}
