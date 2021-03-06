// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int findMin(int * arr, int size)
{
	if (size == 0)
	{
		return 0;
	}

	if (arr[0] < findMin(arr + 1, size - 1) && arr[0] == findMin(arr + 1, size - 1) + 1)
	{
		return arr[0];
	}

	return findMin(arr + 1, size - 1);
}

int *minEl(int * arr, int size)
{
	if (size == 0)
	{
		return NULL;
	}

	if (arr[0] < findMin(arr + 1, size - 1) && arr[0] == findMin(arr + 1, size - 1) + 1)
	{
		return arr;
	}

	return minEl(arr + 1, size - 1);
}

int main()
{
	int size;
	cin >> size;

	int arr[SIZE];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << minEl(arr, size) << endl;

	return 0;
}
