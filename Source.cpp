#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter two numbers to find the difference, composition and quotient of their squares." << endl;
	double a, b, S, P, R, Y, T, E;
	cin >> a;
	cin >> b;
	S = a * a;
	P = b * b;
	R = S + P;
	Y = S - P;
	T = S * P;
	E = S / P;

	cout << "sum=" << R << endl << "difference=" << Y << endl << "composition=" << T << endl << "quotient=" << E << endl;

}