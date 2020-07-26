// Task13-LowerUpper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return ch - 'A' + 'a';
	}

	return ch;
}

char toUpperCase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 'a' + 'A';
	}

	return ch;
}

int main()
{
	char letter;
	cin >> letter;

	cout << toLowerCase(letter) << endl;

	cout << toUpperCase(letter) << endl;

	return 0;
}
