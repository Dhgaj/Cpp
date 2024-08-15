#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout << "x=";
    cin >> x;
    // switch (int(x))
    // {
    // case 1:
    //     cout << x << endl;
    //     y = 3 * x - 5;
    //     break;
    // case 2:
    // case 3:
    cout << x << endl;
    y = 2 * cos(x) + 1;
    //     break;
    // case 4:
    // case 5:
    //     cout << x << endl;
    //     y = sqrt(1 + x * x);
    //     break;
    // default:
    //     cout << x << endl;
    //     y = x * x - 4 * x + 5;
    // }
    cout << "y=" << y << endl;
}