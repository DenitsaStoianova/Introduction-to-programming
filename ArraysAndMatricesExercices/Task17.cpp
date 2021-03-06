// Task17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Намиране дали има еднакви стълбове:

	double matrix[2][3] = { {1, 2, 1}, {3, 3, 3} };

	bool found = false;
	// с първите два цикъла обхождам всички възможни комбинации от два стълба (без повторение)
	for (int j = 0; j < 3 && !found; j++)
	{
		for (int k = j + 1; k < 3 && !found; k++)
		{
			// дали j-тият стълб е еднакъв с k-тия стълб:
			bool equal = true;
			for (int i = 0; i < 2 && equal; i++)
			{
				if (matrix[i][j] != matrix[i][k])
				{
					equal = false;
				}
			}

			if (equal)
			{
				found = true;
			}
		}
	}
	cout << (found ? "Yes" : "No") << endl;

	return 0;
}
