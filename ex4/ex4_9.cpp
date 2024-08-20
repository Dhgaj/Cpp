#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    // 定义一个3行4列的二维数组a，并初始化
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int i, j, total = 0;
    // 定义两个指针变量p和pary，其中p指向整型数据，pary指向包含4个整型的数组
    int *p, (*pary)[4];

    // 通过指针p遍历二维数组a的所有元素，并将它们累加到total中
    for (p = a[0]; p < a[0] + 12; p++)
    {
        total += *p;
    }
    cout << "total = " << total << endl;

    // 遍历二维数组a的每一行
    for (i = 0; i < 3; i++)
    {
        // 将pary指向二维数组a的第i行
        pary = a + i;
        // 遍历二维数组a的第i行的每一个元素
        for (j = 0; j < 4; j++)
        {
            // 输出二维数组a的第i行第j列的元素，宽度为5个字符
            cout << setw(5) << *(*pary + j);
        }
        cout << endl;
    }
}
/*
    总结
可以用指针以一维数组的形式访问二维数组
也可以以指向数组的指针访问二维数组 eg. int(*pary)[4]

*/