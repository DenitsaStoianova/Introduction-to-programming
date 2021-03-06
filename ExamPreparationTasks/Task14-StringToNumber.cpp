// Task14-StringToNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int parseToNum(char * string)
{
	int num = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		int digit = string[i] - '0';
		num = num * 10 + digit;
	}

	return num;
}

int countDigit(int number)
{
	int count = 0;

	do
	{
		count++;
		number /= 10;

	} while (number != 0);

	return count;
}

void parseToString(int num, char * string)
{
	int digits = countDigit(num);
	string[digits] = '\0';

	do
	{
		int currentDigit = num % 10;
		digits--;
		string[digits] = currentDigit + '0';
		num /= 10;

	} while (num != 0);
}

int main()
{
	char string[100];

	/*
	cin >> string;
	cout << parseToNum(string) + 1 << endl;
	*/

	int number;
	cin >> number;

	parseToString(number, string);

	cout << string << endl;

	return 0;
}
