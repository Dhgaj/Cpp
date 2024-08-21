// 数组的降维处理
#include <iostream>
using namespace std;

const int M = 4, N = 3;
int sum(int *, int, int, int);

int main()
{
    // 定义总和变量和二维数组
    int total, a[M][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // 调用sum函数计算二维数组中第1行到第3行的总和，并将结果赋值给total变量
    total = sum(a[0], 3, 1, 3);

    // 输出计算结果
    cout << "total row 1-3 = " << total << endl;
}

int sum(int *pa, int col, int i, int j)
{
    // 初始化变量t和指针p
    int t = 0, *p;
    // 通过指针p遍历二维数组的第i行到第j行（包含第j行）的元素
    for (p = pa + col * i; p < pa + col * (j + 1); p++)
    {
        // 将当前元素的值加到t中
        t = t + *p;
    }
    // 返回累加结果t
    return t;
}

/*
    total row 1-3 = 72
*/

/*
    总结
    其实就是数组的地址是连续的
    标定每行的起始位置和终止位置
    可以通过每一行来进行访问
*/