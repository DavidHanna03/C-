
#include <iostream>
using namespace std;

void div(int n) {
	for (int i = n; i >= 1; i--) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int main()
{
	int n;
	char c;
	cout << "Please Enter A Positive Integer: ";
	cin >> n;
	div(n);
	while (true) {
		cout << "Would you like to see the divisors of another integer(Y/N)? ";
		cin >> c;
		if (c == 'Y' || c == 'y') {
			while (1) {
				cout << "Please enter a positive integer: ";
				cin >> n;
				if (n <= 0) {
					cout << n << " Is not a positive interger";
					cout << "\n";
				}
				else {
					div(n);
					break;
				}
			}
		}
		else if (c == 'N' || c == 'n') {
			exit(0);
		}
		else {
			cout << "Please respond with Y(or y) for yeas and N(or n)for no." << endl;
		}
	}
	return 0;
}