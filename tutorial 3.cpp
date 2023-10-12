
#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c,x1,x2,discriminant,realpart,imaginarypart;
	//Ax^2+Bx+c=0
	cout << "eneter the value of a";
		cin >> a;
		cout << "enter the value of b";
		cin >> b;
		cout << "eneter the value of c";
		cin >> c;
		discriminant = b * b - 4 * a * c;
		if (discriminant > 0) {
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			x2 = (-b - sqrt(discriminant)) / (2 * a);
			cout << "roots are real and diffrent" << endl;
			cout << "x1 =" << x1 << endl;
			cout << "x2=" << x2 << endl;
		}
		else if (discriminant == 0) {
			cout << "roots are real and same" << endl;
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			cout << "x1=x2=" << x1 << endl;
		}
		else {
			realpart = -b / (2 * a);
			imaginarypart = sqrt(-discriminant) / (2 * a);
			cout << "roots are coomplex and diffrent" << endl;
			cout << "x1=" << realpart << "+" << imaginarypart << "i" << endl;
			cout << "x2=" << realpart << "-" << imaginarypart << "i" << endl;
		}
	system("pause");
}
