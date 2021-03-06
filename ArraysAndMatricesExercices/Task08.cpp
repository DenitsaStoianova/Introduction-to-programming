// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Да се намерят стойността и индексът на минималния елемент

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	int minElementIndex = 0;
	for (int i = 1; i < numOfElements; i++)
	{
		if (arr[i] < arr[minElementIndex])
		{
			minElementIndex = i;
		}
	}

	cout << "Min element: " << arr[minElementIndex] << endl;

	return 0;
}
