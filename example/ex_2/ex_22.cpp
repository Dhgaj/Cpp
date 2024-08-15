#include <iostream>
using namespace std;

int main()
{
    int i, n;
    long int t;
    // 提示用户输入一个整数n
    cout << "Please input one integer n: ";
    // 读取用户输入的整数n
    cin >> n;
    t = 1;
    // 循环计算n的阶乘
    for (i = 1; i <= n; i++)
    {
        t *= i;
    }
    // 输出n的阶乘结果
    cout << n << "!= " << t << endl;
}

// long int 溢出测试
//  表明 在此中 阶乘最大为20 ，超过20时会溢出 ，输出结果为负数或错误的正数
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;

//     long int factorial = 1;
//     for (int i = 1; i <= 25; ++i)
//     {
//         factorial *= i;
//         cout << i << "! = " << factorial << endl;
//     }

//     return 0;
// }