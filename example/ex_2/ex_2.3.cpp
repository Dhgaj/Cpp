#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // 将a和b都初始化为10
    a = b = 10;
    // 输出a和b的值，之间用制表符分隔
    cout << a << "\t" << b << endl;
    // 将b的值赋给a，再将a的值赋为20，最终a和b的值都为20
    (a = b) = 20;
    // 输出a和b的值，之间用制表符分隔
    cout << a << "\t" << b << endl;
    (a = b + 3) = 30;
    cout << a << "\t" << b << endl;
    return 0;
}