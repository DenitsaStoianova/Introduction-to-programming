// Task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number, fact = 1;
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		fact *= i;
	}

	cout << number << "! = " << fact << endl;
	return 0;
}
