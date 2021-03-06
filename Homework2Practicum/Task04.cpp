// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int countEvenDidits(int * arr, int size)
{
	int evenDigits = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenDigits++;
		}
	}

	return evenDigits;
}

int countOddDigits(int * arr, int size)
{
	int oddDigits = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			oddDigits++;
		}
	}

	return oddDigits;
}

const int SIZE = 100;

int main()
{
	cout << "Number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	int arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	cout << "Even digits: " << countEvenDidits(arr, numberOfElements) << endl;;
	cout << "Odd digits: " << countOddDigits(arr, numberOfElements) << endl;

	return 0;
}
