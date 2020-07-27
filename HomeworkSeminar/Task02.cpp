// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Value for loan: ";
	double loanValue;
	cin >> loanValue;

	cout << "Number of months: ";
	double numberOfMonths;
	cin >> numberOfMonths;

	cout << "Interest rate: ";
	double interestRate;
	cin >> interestRate;


	double monthlyInterestRate;
	monthlyInterestRate = interestRate / numberOfMonths;
	cout << "Monthly interest rate: " << monthlyInterestRate << endl;

	double q;
	q = 1 + monthlyInterestRate / 100;
	cout << "q = " << q << endl;

	double loan = 1;
	for (int i = 1; i <= 12; i++)
	{
		loan *= q;
	}
	
	double totalAmount;
	totalAmount = loanValue * loan;

	double monthlyPayment;
	monthlyPayment = totalAmount / numberOfMonths;
	cout << "Monthly payment: " << monthlyPayment << endl;

	cout << "The total amount to be returned: " << totalAmount << endl;

	return 0;
}
