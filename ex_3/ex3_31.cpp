#include <iostream>
using namespace std;

int password(const int &key);

int main()
{
    // 判断密码是否正确
    if (password(123))
    {
        // 密码正确，输出欢迎信息
        cout << "Welcome!";
    }

    else
    {
        // 密码错误，输出错误信息
        cout << "Sorry! You are wrong!";
    }
    return 0;
}
// 改版后
int password(const int &key)
{
    static int n = 0;
    int k;
    cout << "Please input your password: ";
    cin >> k;
    n++;
    if (k != key)
    {
        if (n < 3)
        {
            return password(key); // 递归调用并返回结果
        }
        return 0; // 超出尝试次数，返回0
    }
    return 1; // 密码正确，返回1
}
// 改版前
// int password(const int &key)
// {
//     static int n = 0;
//     int k;
//     // 提示用户输入密码
//     cout << "Please input your password: ";
//     // 从标准输入读取用户输入的密码
//     cin >> k;
//     // 静态变量n自增
//     n++;
//     // 如果n小于3
//     if (n < 3)
//     {
//         // 如果输入的密码等于key
//         if (k == key)
//         {
//             // 返回1表示密码正确
//             return 1;
//         }
//         else
//         {
//             // 递归调用password函数，重新输入密码
//             password(key);
//         }
//     }
//     else
//     {
//         // 如果输入的密码不等于key
//         if (k != key)
//         {
//             // 返回0表示密码错误
//             return 0;
//         }
//     }
//     // 返回0表示密码错误
//     return 0;
// }