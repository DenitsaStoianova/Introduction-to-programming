// Task08-countEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int countEven(int * arr, int size)
{
	if (size == 0)
	{
		return 0;
	}

	if (arr[0] % 2 == 0)
	{
		return 1 + countEven(arr + 1, size - 1);
	}

	return countEven(arr + 1, size - 1);
}

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << countEven(arr, 5) << endl;

	return 0;
}
