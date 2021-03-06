// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int factoriel(int& element)
{
	int fact = 1;

	for (int i = 1; i <= element; i++)
	{
		fact *= i;
	}

	return fact;
}

void printFactoriel(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "! = " << factoriel(arr[i]) << endl;
	}
}

const int SIZE = 100;

int main()
{
	cout << "Number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	int arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	printFactoriel(arr, numberOfElements);


	return 0;
}
