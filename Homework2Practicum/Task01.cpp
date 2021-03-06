// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

double powNum(double number, int pow)
{
	double result = 1;
	for (int i = 0; i < pow; i++)
	{
		result *= number;
	}

	return result;
}

double h(int n, int a, int b)
{
	return (b - a) / n;
}

double f(int x)
{
	return powNum(x, 3) - 5 * x;
}

double calculate(int n, int a, int b)
{
	double x = a + h(n, a, b);

	double sum = ((h(n, a, b)) / 2)*(f(a) + f(x));

	for (int i = 1; i <= n; i++)
	{
		double x1 = x + h(n, a, b);

		double x2 = x1 + h(n, a, b);

		sum += ((h(n, a, b)) / 2)*(f(x1) + f(x2));

		x = x1;
		x1 = x2;
	}

	return sum;
}

int main()
{
	cout << "n = ";
	int n, a, b;
	cin >> n;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "Integral = " << calculate(n, a, b) << endl;

	return 0;
}
