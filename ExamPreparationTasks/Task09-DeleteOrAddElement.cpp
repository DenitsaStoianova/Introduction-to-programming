// Task09-DeleteOrAddElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void remove(int * arr, int size, int index)
{
	for (int j = index; j < size - 1; j++)
	{
		arr[j] = arr[j + 1];
	}
}

void deleteElement(int * arr, int size, int element)
{
	int indexToDel = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			indexToDel = i;
			count++;
			remove(arr, size, indexToDel);
		}
	}
	cout << count << endl;

	for (int i = 0; i < size - count; i++)
	{
		cout << arr[i] << " ";
	}

}

void addElement(int * arr, int size, int position)
{
	int element;
	cin >> element;

	for (int i = size - 1; i >= position; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[position] = element;

	for (int i = 0; i <= size; i++)
	{
		cout << arr[i] << " ";
	}
}

const int SIZE = 100;

int main()
{
	int numOfEl;
	cin >> numOfEl;

	int element;
	cin >> element;

	int arr[SIZE];

	for (int i = 0; i < numOfEl; i++)
	{
		cin >> arr[i];
	}

	//deleteElement(arr, numOfEl, element);

	addElement(arr, numOfEl, element);

	cout << endl;
	
	return 0;
}
