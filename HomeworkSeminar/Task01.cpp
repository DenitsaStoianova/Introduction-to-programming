// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;

	if (input % 2 == 0)
	{
		cout << "Number must be odd!" << endl;
	}
	else
	{
		for (int i = 0; i < input; i++)
		{
			for (int c = 0; c < input; c++)
			{
				if (c == i || i == input - 1 - c || i == input - 1 || i == 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

	return 0;
}
