#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "rus");
	double A, B, C, x, y;
	cout << "Задача 1:Поменять местами содержимое переменных A и B и вывести новые значения A и B. " << endl;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	A = A + B;
	B = A - B;
	A = A - B;
	cout << "A=" << A << endl << "B=" << B << endl;
	cout << "Задача 2:Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C. " << endl;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	A = A + B;
	B = A - B;
	A = A - B;
	B = B + C;
	C = B - C;
	B = B - C;
	cout << "A=" << A << endl << "B=" << B << endl << "C=" << C << endl;
	cout << "Задача 3:Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C. " << endl;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
   A = A + C;
   C = A - C;
   A = A - C; 
   C = C + B;
   B = C - B;
   C = C - B;
	cout << "A=" << A << endl << "B=" << B << endl << "C=" << C << endl;
	
	cout << "Задача 4: Найти значение функции y = 3x^6 - 6x^2 - 7 при данном значении x" << endl;
	cout << "x=";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y=" << y << endl;

	cout << "Задача 5:Найти значение функции y = 4(x-3)^6 - 7(x-3)^3 + 2 при данном значении x" << endl;
	cout << "x=";
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y=" << y << endl;
	cout << "Задача 6:Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения." << endl;
	cout << "A=";
	cin >> A;
	y = A*A;
	y = y * y;
	y = y * y;
	cout << "A^8=" << y << endl;

	cout << "Задача 7:Дано число A. Вычислить A^15 , используя две вспомогательные переменные и пять операции умножения." << endl;
	cout << "A=";
	cin >> A;
	y = A * A;
	x = y * A;
	x = x * y;
	y = x * x;
	x = y * x;
	cout << "A^15=" << x << endl;

}