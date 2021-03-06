// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int input, balanceValue = 5, numberOfVoucher, count5InVoucher = 0, lastNumberOfVoucher;

	do
	{
		cout << "1: Press 1 to check the balance!" << endl;
		cout << "2: Press 2 to charge the voucher!" << endl;
		cout << "3: Press 3 to exit!" << endl;

		cin >> input;

		switch (input)
		{
		case 1:
			cout << "Balance: " << balanceValue << endl;
			break;
		case 2:
			cout << "Number of voucher: ";
			cin >> numberOfVoucher;

			while (numberOfVoucher)
			{
				lastNumberOfVoucher = numberOfVoucher % 10;

				if (lastNumberOfVoucher == 5)
				{
					count5InVoucher++;

				}
				numberOfVoucher /= 10;
			}

			if (count5InVoucher == 3)
			{
				balanceValue += 10;
				cout << "You charged your voucher!" << "\n" << "Balance value: " << balanceValue << endl;
			}
			break;
		case 3: 
			cout << "Exit!" << endl;
			break;
		default:
			cout << "You must choose between 1, 2 or 3!" << endl;
			break;
		}

	} while (input < 3);

	return 0;
}
