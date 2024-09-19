// 用new申请基本类型空间时，可以用括号“（）”对储存单元赋初值
#include <iostream>
using namespace std;
int main()
{
    // 声明一个整型指针变量p，并初始化为NULL
    int *p = NULL;

    // 动态分配内存空间，并将地址赋值给指针p，初始值为89
    p = new int(89);

    // 判断指针p是否为NULL
    if (p == NULL)
    {
        // 如果为NULL，则输出内存分配失败的信息
        cout << "allocate failure" << endl;
        // 返回错误码1
        return 1;
    }

    // 输出指针p所指向的值
    cout << *p << endl;

    // 释放指针p所指向的内存空间
    delete p;

    // 将指针p重新赋值为NULL，避免悬挂指针
    p = NULL;

    // 程序正常结束，返回0
    return 0;
}