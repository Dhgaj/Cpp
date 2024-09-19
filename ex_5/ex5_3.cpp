// 验证数据交换
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter: ";
    cin >> a >> b;
    cout << a << endl;

    a ^= b;
    cout << a << endl;
    a ^= b;
    cout << a << endl;
}