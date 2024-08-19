#include <iostream>
using namespace std;

int main()
{
    // 定义三个双精度浮点型数组
    double aa[2] = {1.1, 2.2}, bb[2] = {3.3, 4.4}, cc[2] = {5.5, 6.6};
    // 定义一个双精度浮点型指针数组
    double *pf[3];
    // 将三个数组的地址分别赋值给指针数组
    pf[0] = aa;
    pf[1] = bb;
    pf[2] = cc;
    // 外层循环遍历指针数组
    for (int i = 0; i < 3; i++)
    {
        // 内层循环遍历每个数组
        for (int j = 0; j < 2; j++)
        {
            // 输出指针数组中对应指针指向的元素
            cout << *(pf[i] + j) << '\t';
        }
        // 换行
        cout << endl;
    }
}