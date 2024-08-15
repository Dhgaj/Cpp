#include <iostream>
using namespace std;
int main()
{
    int i, n;
    double x, max;

    // 输出提示信息并读取 n 的值
    cout << "n= ";
    cin >> n;

    // 读取第一个 x 的值，并将其作为最大值 max 的初始值
    cin >> x;
    max = x;

    // 从第二个数开始遍历，直到第 n 个数
    for (i = 2; i <= n; i++)
    {
        // 读取当前 x 的值
        cin >> x;

        // 如果当前 x 的值大于 max，则更新 max 的值
        if (x > max)
        {
            max = x;
        }
    }

    // 输出最大值 max
    cout << "max= " << max << endl;
}