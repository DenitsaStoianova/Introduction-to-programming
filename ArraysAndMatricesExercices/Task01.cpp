// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Копиране на масив

	cout << "Enter number of elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	cout << "Enter elements of array:" << endl;
	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	int copyArr[SIZE];
	int copyArrCount;
	copyArrCount = numOfElements;

	for (int i = 0; i < numOfElements; i++)
	{
		copyArr[i] = arr[i];
	}

	cout << "Copy array: ";
	for (int i = 0; i < numOfElements; i++)
	{
		cout << copyArr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
