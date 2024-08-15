#include <iostream>
using namespace std;

int main()
{
    double a, b, c, s, area;
    cout << "请输入三条边的长度:";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "这三条边可以组成三角形" << endl;
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area << endl;
        return 0;
    }
    else
    {
        cout << "这三条边不能组成三角形" << endl;
        return 0;
    }
}