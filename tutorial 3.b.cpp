

#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double s, r, h;
	cout << "calculate the hight of the cylinder" << endl;

	cout << "input the surface of the cylinder";
	cin >> s;
	cout << "input the radius of the cylinder";
	cin >> r;



	h = (s - 2 * 3.14 * r * r) / (2 * 3.14 * r);

	cout << "the hight of a cylinder is" << endl;
	cout << h << endl;
	return 0;

}