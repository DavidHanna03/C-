// tutorial 6.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
// created by:david hanna 

#include<iostream>

using namespace std;

int main()
{
	int choice;
	
	cout << "Enter the size of coffee:" << endl << "\t1. Large" << endl << "\t2. Medium" << endl << "\t3.Small" << endl;
	cout << "Your choice(1-3) : ";
	cin >> choice;
	
	while (choice < 1 || choice > 3)
	{
		cout << "Invalid choice" << endl;
		cout << "Your choice(1-3) : ";
		cin >> choice;
	}

	
	if (choice == 1)
		cout << "You selected Large coffee which costs $5.99" << endl;
	else if (choice == 2)
		cout << "You selected Medium coffee which costs $4.99" << endl;
	else
		cout << "You selected Small coffee which costs $3.99" << endl;

	return 0;
}
