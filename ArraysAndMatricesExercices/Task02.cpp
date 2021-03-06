// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Проверка дали два масива имат едни и същи елементи

	cout << "Number of first array elements: ";
	int numOfFirstArrElements;
	cin >> numOfFirstArrElements;

	int firstArr[SIZE];

	for (int i = 0; i < numOfFirstArrElements; i++)
	{
		cin >> firstArr[i];
	}

	cout << "Number of second array elements: ";
	int numOfSecondArrElements;
	cin >> numOfSecondArrElements;

	int secondArr[SIZE];

	for (int i = 0; i < numOfSecondArrElements; i++)
	{
		cin >> secondArr[i];
	}

	bool equal = true;
	if (numOfFirstArrElements != numOfSecondArrElements)
	{
		equal = false;
	}
	else
	{
		for (int i = 0; i < numOfFirstArrElements && equal; i++)
		{
			if (firstArr[i] != secondArr[i])
			{
				equal = false;
			}
		}
	}

	cout << (equal ? "Equal" : "Not equal") << endl;

	return 0;
}
