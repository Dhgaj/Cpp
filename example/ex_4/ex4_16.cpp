// 冒泡排序法
#include <iostream>
using namespace std;
#include <ctime>

void bubble(int a[], int size);

int main()
{
    int i, a[10];
    // 初始化随机数种子
    srand(int(time(0)));
    // 生成10个随机数并保存到数组a中
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
    }
    // 输出数组a的元素
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    // 调用自定义的bubble函数对数组a进行排序
    bubble(a, 10);
    // 输出排序后的数组a的元素
    cout << "Order1: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}

void bubble(int a[], int size)
{
    int i, temp, work;
    // 外层循环控制冒泡排序的趟数
    for (int pass = 1; pass < size; pass++)
    {
        work = 1;
        // 内层循环进行相邻元素的比较和交换
        for (i = 0; i < size - pass; i++)
        {
            // 如果当前元素大于下一个元素，则交换它们的位置
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                // 标记有元素交换发生
                work = 0;
            }
        }
        // 如果某一趟没有发生交换，说明数组已经有序，直接跳出循环
        if (work)
        {
            break;
        }
    }
}