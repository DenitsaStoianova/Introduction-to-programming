// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void removeEl(int *arr, int size, int index)
{
	for (int i = index; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
}

int indexToRemove(int * arr, int size, int numberToRemove)
{
	int indexOfNumberToRemove = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == numberToRemove)
		{
			indexOfNumberToRemove = i;

			removeEl(arr, size, indexOfNumberToRemove);
		}
	}

	return indexOfNumberToRemove;
}

bool removedElements(int * arr, int size, int numberToRemove)
{
	int index = indexToRemove(arr, size, numberToRemove);

	if (index == 0)
	{
		return false;
	}

	return true;
}

const int SIZE = 100;

int main()
{
	cout << "Number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	cout << "Number: ";
	int number;
	cin >> number;

	int arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	cout << "Has removed elements: " << removedElements(arr, numberOfElements, number) << endl;

	return 0;
}
