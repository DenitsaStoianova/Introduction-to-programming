// Task15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isPerfectSquare(int num)
{
	int r = 1, i = 1;
	while (r < num)
	{
		i++;
		r = i * i;
	}

	if (r == num)
	{
		return true;
	}

	return false;
}

int findSquares(double num)
{
	int result = 1;

	for (int i = 1; i <= num; i++)
	{
		if (isPerfectSquare(i))
		{
			result *= i;
		}
	}

	return result;
}

void printMatrix(double matrix[][4], int size, int element)
{
	double secondMatrix[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i < j)
			{
				secondMatrix[i][j] = findSquares(matrix[i][j]);
			}
			else
			{
				secondMatrix[i][j] = matrix[i][j];
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << secondMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	double matrix[4][4];

	cout << "Element: ";
	int element;
	cin >> element;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matrix[i][j];
		}
	}

	printMatrix(matrix, 4, element);

	return 0;
}
