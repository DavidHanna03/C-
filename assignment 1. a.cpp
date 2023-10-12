// assignment 1. a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	float res[6], eq = 0;
	const float VAL = 7.5;

	// input values of resistors res1,res2,res3,res4,res5,res6
	for (int i = 0; i < 6; i++)
	{
		cout << "\nEnter value of resistor r" << i + 1 << " : ";
		cin >> res[i];
	}
	eq = ((res[0] + res[1]) * res[3] * res[5]) / ((res[2] + res[3]) * res[0] * res[4]);

	if (eq == VAL)
		cout << "\n Good Design values: ";
	else
		cout << "\n Bad Design values: ";
	for (int i = 0; i < 6; i++)
	{
		cout << res[i] << " ";
	}

	return 0;
}
