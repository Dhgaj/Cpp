// 动态分配和释放储存空间
#include <iostream>
using namespace std;

int main()
{
    // 声明一个整型指针p，并初始化为NULL
    int *p = NULL;

    // 使用new操作符为p分配内存空间
    p = new int;

    // 检查内存分配是否成功
    if (p == NULL)
    {
        // 如果分配失败，输出错误信息
        cout << "allocate failure" << endl;
        // 返回1表示程序异常退出
        return 1;
    }

    // 将分配的内存空间的值设置为20
    *p = 20;

    // 输出指针p所指向的内存空间的值
    cout << *p << endl;

    // 释放指针p所指向的内存空间
    delete p;

    // 将指针p重新设置为NULL，避免野指针
    p = NULL;

    // 返回0表示程序正常退出
    return 0;
}

/*

return 1 和 return 0 的区别主要在于它们的语义和用途，尤其是在不同的上下文中。以下是一些常见的情况：

1.在C/C++程序的main函数中：
return 0 通常表示程序成功执行，没有错误。
return 1 或其他非零值通常表示程序执行过程中出现了错误。

2.在函数中：
return 0 和 return 1 可以用来表示布尔值，0 通常表示 false，1 通常表示 true。

3.在脚本或命令行程序中：
return 0 通常表示命令成功执行。
return 1 或其他非零值通常表示命令执行失败。

*/