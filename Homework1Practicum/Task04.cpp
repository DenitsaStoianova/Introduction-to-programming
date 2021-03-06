// Task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void removeVowelLetters(char * text)
{
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == 'a' || text[i] == 'u' || text[i] == 'o' || text[i] == 'y' || text[i] == 'e' || text[i] == 'i')
		{
			int index = i;
			for (int j = index; text[j] != '\0'; j++)
			{
				text[j] = text[j + 1];
			}
		}
	}
}

const int SIZE = 100;

int main()
{
	char text[SIZE];
	cin >> text;

	removeVowelLetters(text);

	cout << text << endl;

	return 0;
}
