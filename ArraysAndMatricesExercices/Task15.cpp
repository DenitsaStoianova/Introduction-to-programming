// Task15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Oбхождане само на вторичния диагонал в посока надолу:

	cout << "Number of matrix elements: ";
	int numOfMatrixElements;
	cin >> numOfMatrixElements;

	int matrix[SIZE][SIZE];

	for (int i = 0; i < numOfMatrixElements; i++)
	{
		for (int j = 0; j < numOfMatrixElements; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << "Second diagonal elements: ";
	for (int i = 0; i < numOfMatrixElements; i++)
	{
		cout << matrix[i][numOfMatrixElements - 1 - i] << " ";
	}
	cout << endl;

	return 0;
}
