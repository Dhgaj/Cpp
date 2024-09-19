#include <iostream>
using namespace std;

int main()
{
    const char *s = "Hello World!!!!";
    // 字符串字面量 "Hello World!!!!" 被赋给常量字符指针 s
    // 在 C++11 中，字符串字面量是常量字符数组，不能赋值给 char* 类型的指针
    int i;
    // 循环输出 s 的前 6 个字符 ，i=5是空格
    for (i = 0; i < 6; i++)
    {
        cout << s[i];
    }
    cout << endl;
    // 循环输出 s 的第 7 到第 11 个字符
    for (i = 6; i < 12; i++)
    {
        cout << s[i];
    }
    cout << endl;
    // 此方法包括 空格 的输出
    // 循环输出 s 的前 12 个字符，包括空格
    for (i = 0; i < 12; i++)
    {
        cout << s[i];
    }
    cout << endl;
    // 用下标方式循环输出 s 的前 6 个字符
    for (i = 0; i < 6; i++)
    {
        cout << s[i];
    }
    // 用指针方式循环输出 s 的第 7 到第 11 个字符，使用指针偏移
    for (i = 6; i < 12; i++)
    {
        cout << *(s + i);
    }
    cout << endl;
}