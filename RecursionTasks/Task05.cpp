// Task06-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

// 1. Сума на елементите на масив
int sum(int * arr, int size)
{
	if (size == 0)
	{
		return 0;
	}

	return arr[0] + sum(arr + 1, size - 1);
}

// 2. Проверка дали съществува елемент с дадена стойност:
bool contains(int * arr, int size, int element)
{
	if (size == 0)
	{
		return false;
	}

	if (arr[size - 1] == element)
	{
		return true;
	}

	return contains(arr, size - 1, element);
}

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

	//cout << sum(arr, numOfEl) << endl;

	cout << contains(arr, numOfEl, element) << endl;

	return 0;
}
