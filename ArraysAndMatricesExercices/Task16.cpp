// Task16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Oбхождане всички елементи под втория диагонал (включително и него),
	// по стълбове в посока нагоре,
    // започвайки от най-десния стълб

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

	cout << "Elements: " << endl;
	for (int j = numOfMatrixElements - 1; j >= 0; j--)
	{
		for (int i = numOfMatrixElements - 1; i + j >= numOfMatrixElements; i--)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
