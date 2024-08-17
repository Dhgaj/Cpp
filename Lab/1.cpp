#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout << "Please enter (x,y): ";
    cin >> x >> y;
    if (-2 <= x && x <= 2 && -2 <= y && y <= 2)
    {
        cout << "The point (" << x << "," << y << ") is in the square." << endl;
        cout << true << endl;
    }
    else
    {
        cout << "The point (" << x << "," << y << ") is not in the square." << endl;
        cout << false;
    }
}