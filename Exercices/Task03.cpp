// Task13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Задача. Да се намери броят на цифрите в десетичния запис
	// на дадено естествено число (включително и 0), които са по-големи от
	// средното аритметично на цифрите.

	int number;
	cin >> number;

	int sumOfDigits = 0;
	int countDigits = 0;

	int numberCopy = number;
	do
	{
		sumOfDigits += numberCopy % 10;
		countDigits++;
		numberCopy /= 10;

	} while (numberCopy);

	double averageDigitsSum = (double)sumOfDigits / countDigits;

	int resultCount = 0;
	numberCopy = number;
	do
	{
		if (numberCopy % 10 > averageDigitsSum)
		{
			resultCount++;
		}
		numberCopy /= 10;

	} while (numberCopy);

	cout << resultCount << endl;

	return 0;
}
