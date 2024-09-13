#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 定义字符串数组name，其中包含5个名字
    string name[5] = {"Tom", "Bob", "Jack", "Alice", "Amy"};
    // 用于临时存储字符串的变量
    string s;
    // 定义循环变量i, j 和索引变量k
    int i, j, k;

    // 外层循环，遍历每个元素，i表示当前需要排序的元素
    // 注意，最多循环到 i = 3，因为最后一个元素不需要再进行比较
    for (i = 0; i < 4; i++)
    {
        // 假设当前元素 i 是最小的
        k = i;
        // 内层循环，从当前元素i的下一个元素开始到数组末尾，寻找比name[i]更小的元素
        for (j = i + 1; j < 5; j++)
        {
            // 如果name[j]小于name[k]，更新k为当前的j
            if (name[k] > name[j])
            {
                // 记录更小值的索引
                k = j;
            }
        }
        // 如果找到比name[i]更小的元素，交换两者
        if (k != i) // 如果找到的最小值不是当前i位置
        {
            s = name[k];       // 用临时变量s保存name[k]的值
            name[k] = name[i]; // 将name[i]的值赋给name[k]
            name[i] = s;       // 将保存的最小值赋给name[i]
        }
    }

    // 输出排序后的数组
    for (i = 0; i < 5; i++)
    {
        cout << name[i] << endl; // 按行输出每个名字
    }
}