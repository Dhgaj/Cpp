#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int a, b;
    // 输出提示信息，要求用户输入a的值
    cout << "Input a: ";
    // 从标准输入读取用户输入的a的值
    cin >> a;
    // 输出提示信息，要求用户输入b的值
    cout << "Input b: ";
    // 从标准输入读取用户输入的b的值
    cin >> b;
    // 输出a和b的最大公约数
    cout << "gcd(" << a << "," << b << ") = " << gcd(a, b) << endl;
    return 0;
}

int gcd(int a, int b)
{
    int g;
    if (b == 0)
    {
        // 如果b为0，则最大公约数为a
        g = a;
    }
    else
    {
        // 递归调用gcd函数，传入b和a对b取模的结果作为参数
        g = gcd(b, a % b);
    }
    // 返回最大公约数
    return g;
}