// tutorial 6.b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, result;
	cout << "enter the value of x : ";
	cin >> x;
	if (x > 0)
	{
		result = log(x) + 10;
		cout << result << endl;
	}
	else
	{
		double p = -3 * x;
		double result = pow(2, p);
		cout << result << endl;
	}
}