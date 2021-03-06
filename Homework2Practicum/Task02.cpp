// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int ROW_SIZE = 100;
const int COL_SIZE = 100;

void createAndPrintMatrix(int rows, int cols)
{
	int matrix[ROW_SIZE][COL_SIZE];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				matrix[i][j] = i;
			}
			else if (i < j)
			{
				matrix[i][j] = j - i;
			}
			else if (i > j)
			{
				matrix[i][j] = i * j;
			}
			
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	createAndPrintMatrix(rows, cols);

	return 0;
}
