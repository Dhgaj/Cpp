#include <iostream>
using namespace std;

void yhtriangle(int *const, int);

int main()
{
    int *yh;
    int n = 4;
    // do
    // {
    //     // 输出提示信息
    //     cout << "Please input power:\nn= ";
    //     // 从标准输入读取整数n
    //     cin >> n;
    // // 当n小于0或大于20时，继续循环
    // } while (n < 0 || n > 20);

    // 动态分配n+1个整数的内存空间，并将地址赋值给yh
    yh = new int[n + 1];

    // 调用yhtriangle函数，传入yh和n作为参数
    yhtriangle(yh, n);

    // 释放yh指向的内存空间
    delete[] yh;
    // 将yh置为NULL，避免野指针
    yh = NULL;
    return 0;
}

void yhtriangle(int *const py, int pn)
{
    int i, j, k;
    // 初始化第一个元素为1
    py[0] = 1;
    // 输出第一行第一个元素
    cout << py[0] << endl;
    // 从第二行开始循环
    for (i = 1; i < pn + 1; i++)
    {
        // 设置当前行的最后一个元素为1
        py[i] = 1;
        // 从倒数第二个元素开始向前循环
        for (j = i - 1; j > 0; j--)
        {
            // 当前元素等于前一个元素与当前元素的上一个元素之和
            py[j] = py[j - 1] + py[j];
            // j=1时，py[1]=py[0]+py[1],结束循环,py[0]=1
        }

        // 输出当前行
        for (k = 0; k <= i; k++)
        {
            cout << py[k] << "  ";
        }
        cout << endl;
    }
}

/*

1
1  1
1  2  1
1  3  3  1
1  4  6  4  1

*/