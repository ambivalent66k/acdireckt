#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter the lengths of the sides a and b" << endl;
	double a, b, S, P;
	cin >> a;
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "S=" << S << endl << "P=" << P << endl;


}