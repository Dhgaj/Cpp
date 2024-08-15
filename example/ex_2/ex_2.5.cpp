#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    // 输入三个整数a、b、c
    cin >> a >> b >> c;

    // 判断a和b的大小，将较大的值赋给max
    if (a > b)
    {
        max = a;
    }
    else
        max = b;

    // 判断c和max的大小，将较大的值赋给max
    if (c > max)
    {
        max = c;
    }

    // 输出最大值max
    cout << max << endl;

    return 0;
}