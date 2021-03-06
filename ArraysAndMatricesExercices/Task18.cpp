// Task18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int ROWS_SIZE = 100;
const int COLS_SIZE = 100;

int main()
{
	// Сумиране на елементите на матрица

	cout << "rows=";
	int rows;
	cin >> rows;

	cout << "cols=";
	int cols;
	cin >> cols;

	int matrix[ROWS_SIZE][COLS_SIZE];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << "Print matrix: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int sumUnderFirstDiagonal = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i > j)
			{
				sumUnderFirstDiagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum under first diagonal: " << sumUnderFirstDiagonal << endl;

	int sumOverFirstDiagonal = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i < j)
			{
				sumOverFirstDiagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum over first diagonal: " << sumOverFirstDiagonal << endl;

	int sumOfFirstDiagonal = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				sumOfFirstDiagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum of first diagonal: " << sumOfFirstDiagonal << endl;

	int sumOfSecondDiagonal = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i + j == rows - 1)
			{
				sumOfSecondDiagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum of second diagonal: " << sumOfSecondDiagonal << endl;

	int sumOfOverSecondDiagonal = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i + j < rows - 1)
			{
				sumOfOverSecondDiagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum over second diagonal: " << sumOfOverSecondDiagonal << endl;

	int sumUnderSecondDiagonal = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i + j > rows - 1)
			{
				sumUnderSecondDiagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum under second diagonal: " << sumUnderSecondDiagonal << endl;

	return 0;
}
