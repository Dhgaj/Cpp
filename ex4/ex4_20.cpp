// 编写函数，申请动态数组
#include <iostream>
using namespace std;

void App(int *&pa, int n);

int main()
{
    int *ary = NULL, *t;
    int i;
    int n = 10;

    // 调用App函数，传入ary和n
    // cout << "n= ";
    // cin >> n;
    App(ary, n);

    // 遍历ary数组并打印每个元素
    for (t = ary; t < ary + n; t++)
    {
        cout << *t << '\t';
    }
    cout << endl;

    // 将ary数组的每个元素赋值为10+i
    for (i = 0; i < n; i++)
    {
        ary[i] = 10 + i;
    }

    // 再次遍历ary数组并打印每个元素
    for (i = 0; i < n; i++)
    {
        cout << ary[i] << '\t';
    }
    cout << endl;

    // 释放ary数组占用的内存
    delete[] ary;

    // 将ary指针置为空
    ary = NULL;

    return 0;
}

void App(int *&pa, int len)
{
    // 动态分配内存空间，并将地址赋值给指针pa
    pa = new int[len];
    // 判断内存分配是否成功
    if (pa == NULL)
    {
        // 输出内存分配失败的信息
        cout << "allocation faiure!" << endl;
        // 结束函数执行
        return;
    }
    // 遍历数组，将每个元素初始化为0
    for (int i = 0; i < len; i++)
    {
        pa[i] = 0;
    }
}

/*

0       0       0       0       0       0       0       0       0       0
10      11      12      13      14      15      16      17      18      19

*/