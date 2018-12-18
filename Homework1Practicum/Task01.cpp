// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void swap(int * num1, int * num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int number1, number2;
	cin >> number1 >> number2;

	swap(&number1, &number2);

	cout << number1 << " " << number2 << endl;

	return 0;
}
