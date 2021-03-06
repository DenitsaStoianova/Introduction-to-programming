// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void printSquares(int num)
{
	for (int i = 1; i * i < num; i++)
	{
		cout << i * i << " ";
	}
	cout << endl;
}

int factoriel(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}

	return fact;
}

int sumOfSquareNums(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i * i;
	}

	return sum;
}

int powerOfTwo(int num)
{
	int pow = 1;
	for (int i = 0; i < num; i++)
	{
		pow *= 2;
	}

	return pow;
}

int sumOfSquaresOfTwo(int num)
{
	int sum = 0;
	int pow = 1;
	for (int i = 0; i <= num; i++)
	{
		sum += pow;
		pow *= 2;
	}

	return sum;
}

void printNfibonacciNum(int n)
{
	int first = 0, second = 1, next;

	if (n == 0 || n == 1)
	{
		cout << n << endl;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			next = first + second;
			first = second;
			second = next;
		}
	}

	cout << next << endl;
}

bool isPowerOfTwo(int num)
{
	while (num)
	{
		if (num % 2 != 0 && num != 1)
		{
			return false;
		}
		num /= 2;
	}

	return true;
}

int main()
{
	cout << "Enter number: ";
	int number;
	cin >> number;

	cout << "Squares of numbers to n: ";
	printSquares(number);

	cout << "Factoriel: " << factoriel(number) << endl;

	cout << "Sum of squares from 1 to n: " << sumOfSquareNums(number) << endl;

	cout << "2^number: " << powerOfTwo(number) << endl;

	cout << "Sum of 2^number: " << sumOfSquaresOfTwo(number) << endl;

	cout << "N fibonacci number: ";
	printNfibonacciNum(number);

	cout << "Is power of 2: " << isPowerOfTwo(number) << endl;

	return 0;
}
