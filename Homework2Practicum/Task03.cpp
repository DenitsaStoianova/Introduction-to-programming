// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isPrime(int number)
{
	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool func(int num1, int num2)
{
	if (isPrime(num1) && isPrime(num2))
	{
		if (num1 + 2 == num2)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int number1, number2;
	cin >> number1 >> number2;

	cout << func(number1, number2) << endl;

	return 0;
}
