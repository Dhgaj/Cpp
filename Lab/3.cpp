#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter a integer: ";
    cin >> a;
    for (int i = 1; i <= 5; i++)
    {
        b = a / 10;
        c = a % 10;
        cout << c << "  ";
        a = b;
    }
}