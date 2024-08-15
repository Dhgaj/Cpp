#include <iostream>
using namespace std;

int main()
{
    int a;
    char c;
    double x;

    // 将2.0除以4的结果赋值给整数变量a，因为结果是0.5，所以a的值会被截断为0
    a = 2.0 / 4;

    // 将2.0除以4的结果赋值给双精度浮点数变量x，x的值为0.5
    x = 2.0 / 4;

    // 输出变量a和x的值，它们之间用制表符分隔，然后换行
    cout << a << '\t' << x << endl;

    // 将3加上字符'A'的ASCII码值（65）的结果赋值给整数变量a，a的值为68
    a = 3 + 'A';

    // 将3加上字符'A'的ASCII码值（65）的结果赋值给字符变量c，c的值为字符'D'
    c = 3 + 'A';

    // 输出变量a和c的值，它们之间用制表符分隔，然后换行
    cout << a << '\t' << c << endl;

    // 输出3加上字符'A'的ASCII码值（65）的结果，即字符'D'
    cout << 3 + 'A' << endl;

    return 0;
}