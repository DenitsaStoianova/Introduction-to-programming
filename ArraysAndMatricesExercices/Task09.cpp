// Task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Да се сортира масивът

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < numOfElements - 1; i++)
	{
		int minElementIndex = i;
		for (int j = i + 1; j < numOfElements; j++)
		{
			if (arr[j] < arr[minElementIndex])
			{
				minElementIndex = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[minElementIndex];
		arr[minElementIndex] = temp;
	}

	cout << "Sorted array: ";
	for (int i = 0; i < numOfElements; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
