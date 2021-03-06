// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Да се намерят първите k естествени числа, по-големи от дадено n,
    // чиято сума на цифрите се дели на 7.

	int n, k;
	cin >> n >> k;

	int countGreaterNumbers = 0, currentNumber = n + 1;
	while (countGreaterNumbers < k)
	{
		int  sumOfDigits = 0;
		int currentNumberCopy = currentNumber;

		while (currentNumberCopy != 0)
		{
			sumOfDigits += currentNumberCopy % 10;
			currentNumberCopy /= 10;
		}

		if (sumOfDigits % 7 == 0)
		{
			countGreaterNumbers++;
			cout << currentNumber << " ";
		}

		currentNumber++;
	}
	
	return 0;
}
