// Task04-CheckArr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int digitsCount(int num)
{
	int count = 0;

	while (num != 0)
	{
		count++;
		num /= 10;
	}

	return count;
}

const int SIZE = 100;

int main()
{
	cout << "Enter number of elements: ";
	int numOfEl;
	cin >> numOfEl;

	int arr[SIZE];

	for (int i = 0; i < numOfEl; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < numOfEl; i++)
	{
		int res = arr[i] * arr[i];
		int digits = digitsCount(arr[i]);

		if (res % (int)pow(10, digits) == arr[i])
		{
			cout << "Is automorfic number!" << endl;
		}
		else
		{
			cout << "Is NOT automorfic number!" << endl;
		}
	}

	return 0;
}
