#include <iostream>
using namespace std;

int *maxPoint(int *x, int *y); // 函数声明

int main()
{
    int a = 5, b = 3;
    int *maxPtr = maxPoint(&a, &b); // 调用函数，传入a和b的地址

    // 使用解引用操作符来打印较大值
    cout << "The larger value is: " << *maxPtr << endl;

    return 0;
}

// 函数定义
int *maxPoint(int *x, int *y)
{
    if (*x > *y)
        return x;
    return y;
}