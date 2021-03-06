// Task04-nod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int nod(int a, int b)
{
	if (a == 0 || a == b)
	{
		return b;
	}

	if (b == 0)
	{
		return a;
	}

	if (a > b)
	{
		return nod(a - b, b);
	}

	return nod(a, b - a);
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	cout << nod(num1, num2) << endl;

	return 0;
}
