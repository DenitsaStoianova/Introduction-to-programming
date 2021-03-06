// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Да се провери дали масивът съдържа отрицателен елемент

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	bool flag = false;
	for (int i = 0; i < numOfElements && !flag; i++)
	{
		if (arr[i] < 0)
		{
			flag = true;
		}
	}

	cout << (flag ? "Yes" : "No") << endl;

	return 0;
}
