#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "A:";
    cin >> a;

    cout << "B:";
    cin >> b;

    int i;
    for (i = a; i <= b; ++i)
        cout << i << endl;
    cout << "N:" << b - a + 1 << endl;
    return 0;
}