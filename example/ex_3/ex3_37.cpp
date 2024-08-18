#include <iostream>
using namespace std;

// #define PI 3.1415926
// #define area(r) PI *r *r
//          | |
//          | |
//          | |
//           \/

const double PI = 3.1415926;
inline double area(double r)
{
    return PI * r * r;
}
int main()
{
    double x, s;
    cout << "请输入圆的半径:";
    cin >> x;
    s = area(x);
    cout << "圆的面积为:" << s << endl;
    return 0;
}