// Task10-Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void sort(int * arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

const int SIZE = 100;

int main()
{
	int numOfEl;
	cin >> numOfEl;

	int arr[SIZE];

	for (int i = 0; i < numOfEl; i++)
	{
		cin >> arr[i];
	}

	sort(arr, numOfEl);

	for (int i = 0; i < numOfEl; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
