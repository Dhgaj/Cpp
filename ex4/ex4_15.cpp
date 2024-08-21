// 选择排序法
// 排序思路：第一趟，在a[0]~a[n-1]中选出最小值，将其与a[0]交换;
// 第二趟，在a[1]~a[n-1]中选出最小值，将其与a[1]交换;
// 依次类推，直到a[n-2]和a[n-1]中选出最小值，将其与a[n-2]交换，排序结束。
#include <iostream>
using namespace std;
#include <ctime>

void sort(int[], int);

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
    // 调用自定义的sort函数对数组a进行排序
    sort(a, 10);
    // 输出排序后的数组a的元素
    cout << "Order1: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}

void sort(int x[], int n)
{
    int min, t;
    for (int i = 0; i < n - 1; i++)
    {
        // 初始化最小值的索引为当前循环的起始位置
        t = i;
        // 在剩余元素中查找最小值
        for (int j = i + 1; j < n; j++)
        {
            // 如果找到更小的值，则更新最小值的索引
            if (x[j] < x[t])
            {
                t = j;
            }
        }
        // 如果最小值的索引不是当前循环的起始位置，则交换两个元素的位置
        if (t != i)
        {
            min = x[i];
            x[i] = x[t];
            x[t] = min;
        }
    }
    return;
}