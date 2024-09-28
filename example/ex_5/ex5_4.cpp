// 整型变量值交换
#include <iostream>
using namespace std;

int main()
{
    int a = 123, b = 456;
    cout << a << ' ' << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << ' ' << b << endl;
    return 0;
}