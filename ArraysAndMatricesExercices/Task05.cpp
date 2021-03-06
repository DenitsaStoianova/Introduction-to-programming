// Task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Да се намери индексът, на който се намира елемент с дадена стойност.
	// Ако не се намери такъв, да се отпечата -1. Ако се съдържа на
	// няколко места, да се намери първото срещане

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	int index = -1;
	int element;
	cout << "Enter element: ";
	cin >> element;

	for (int i = 0; i < numOfElements && index < 0; i++)
	{
		if (element == arr[i])
		{
			index = i;
		}
	}
	cout << "Index of element in array: " << index << endl;

	/*
	// Втори вариант: последното срещане
	
	int index = -1;
	int element;
	cout << "Enter element: ";
	cin >> element;

	for (int i = numOfElements - 1; i >= 0 && index < 0; i--)
	{
		if (element == arr[i])
		{
			index = i;
		}
	}
	cout << "Index of element in array: " << index << endl;	
	*/

	return 0;
}
