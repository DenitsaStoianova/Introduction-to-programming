// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Сума на елементите на масив

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	int sumOfElements = 0;
	for (int i = 0; i < numOfElements; i++)
	{
		sumOfElements += arr[i];
	}

	cout << "Sum of all elements: " << sumOfElements << endl;
	system("pause");
	return 0;
}
