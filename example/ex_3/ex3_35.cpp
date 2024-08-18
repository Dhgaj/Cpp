#include <iostream>
using namespace std;

int x; // 全局变量
int main()
{
    int x = 256;                                    // 局部变量
    cout << "Global varriable x = " << ::x << endl; // 输出全局变量
    cout << "Local variable x = " << x << endl;     // 输出局部变量
    return 0;
}