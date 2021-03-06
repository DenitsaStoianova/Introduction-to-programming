// Task05-NewArrs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int findAverageNum(int * arr, int numOfEl)
{
	int avgNum = 0;
	int sum = 0;

	for (int i = 0; i < numOfEl; i++)
	{
		sum += arr[i];
	}

	avgNum = sum / numOfEl;

	return avgNum;
}

int findClosestAvgNum(int * arr, int numOfEl)
{
	int averageNum = findAverageNum(arr, numOfEl);

	//setting initial values
	int closestNum = arr[0];
	int closeAverage = abs(arr[0] - averageNum);

	for (int i = 0; i < numOfEl; i++)
	{
		if (abs(arr[i] - averageNum) < closeAverage)
		{
			closestNum = arr[i];
		}
	}

	return closestNum;
}

const int SIZE = 100;

void printArr(int * arr, int numOfEl)
{
	for (int i = 0; i < numOfEl; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void printLessAndMoreArrs(int closeNum,int * arr, int numOfEl)
{
	int lessNumsArr[SIZE];
	int lessArrIndex = 0;

	int moreNumsArr[SIZE];
	int moreArrIndex = 0;

	for (int i = 0; i < numOfEl; i++)
	{
		if (arr[i] < closeNum)
		{
			lessNumsArr[lessArrIndex] = arr[i];
			lessArrIndex++;
		}

		if (arr[i] > closeNum)
		{
			moreNumsArr[moreArrIndex] = arr[i];
			moreArrIndex++;
		}
	}

	printArr(lessNumsArr, lessArrIndex);
	printArr(moreNumsArr, moreArrIndex);
}

int main()
{
	cout << "Enter number of elements: ";
	int numOfEl;
	cin >> numOfEl;

	int arr[SIZE];

	for (int i = 0; i < numOfEl; i++)
	{
		cin >> arr[i];
	}
	
	int averageNum = findAverageNum(arr, numOfEl);

	//kой от елементите на масива е най-близък по стойност до средно аритметичното:
	int closestNum = findClosestAvgNum(arr, numOfEl);
	
	cout << "Average num: " << averageNum << endl;

	//всички елементи от първоначалния масив, които са по-малки от средноаритметичното:
	printLessAndMoreArrs(closestNum, arr, numOfEl);

	return 0;
}
