#include <iostream>
using namespace std;

void anonym(const int &ref)
{
    // 输出ref的地址
    cout << "The address of ref is: " << &ref << endl;
    return;
}

int main()
{
    int val = 10;
    // 输出val的地址
    cout << "The address of val is: " << &val << endl;

    // 调用anonym函数，传入val的值
    anonym(val);

    // 调用anonym函数，传入val加5的值
    anonym(val + 5);
}