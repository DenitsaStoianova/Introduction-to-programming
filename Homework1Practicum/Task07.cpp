// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int powNum(int number, int pow)
{
	int result = 1;

	for (int i = 1; i <= pow; i++)
	{
		result *= number;
	}

	return result;
}

int convertNum(int number)
{
	int decimalNum = 0, remainder, count = 0;

	while (number != 0)
	{
		remainder = number % 10;
		number /= 10;

		decimalNum += remainder * powNum(2, count);
		count++;
	}

	return decimalNum;
}

int * findNumber(int * arr, int size, int number)
{
	int * ptr = nullptr;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == convertNum(number))
		{
			ptr = arr + i;
		}
	}

	return (ptr == nullptr) ? NULL : ptr;
}

int main()
{
	cout << "Number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	cout << "Number in binary: ";
	int number;
	cin >> number;

	int arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	cout << findNumber(arr, numberOfElements, number) << endl;

	return 0;
}
