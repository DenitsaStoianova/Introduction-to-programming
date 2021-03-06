// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void addElements(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void sort(int * arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void print(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sortTwoArrays(int * arr1, int size1, int * arr2, int size2, int * arr3)
{
	int size = size1 + size2;

	int arr1Index = 0, arr2Index = 0, arr3Index = 0;

	while (arr1Index < size1 && arr2Index < size2)
	{
		if (arr1[arr1Index] < arr2[arr2Index])
		{
			arr3[arr3Index] = arr1[arr1Index];
			arr1Index++;
			arr3Index++;
		}
		else
		{
			arr3[arr3Index] = arr2[arr2Index];
			arr2Index++;
			arr3Index++;
		}
	}

	while (arr1Index < size1)
	{
		arr3[arr3Index++] = arr1[arr1Index++];
	}

	while (arr2Index < size2)
	{
		arr3[arr3Index++] = arr1[arr2Index++];
	}

}

const int SIZE = 100;

int main()
{
	cout << "Number of first array elements: ";
	int numberOfElements1;
	cin >> numberOfElements1;

	int arr1[SIZE];
	addElements(arr1, numberOfElements1);

	cout << "Number of second array elements: ";
	int numberOfElements2;
	cin >> numberOfElements2;

	int arr2[SIZE];
	addElements(arr2, numberOfElements2);

	sort(arr1, numberOfElements1);
	sort(arr2, numberOfElements2);

	int arr3[SIZE];
	sortTwoArrays(arr1, numberOfElements1, arr2, numberOfElements2, arr3);

	cout << "First array sorted: ";
	print(arr1, numberOfElements1);

	cout << "Second array sorted: ";
	print(arr2, numberOfElements2);

	cout << "Third array sorted: ";
	print(arr3, numberOfElements1 + numberOfElements2);

	return 0;
}
