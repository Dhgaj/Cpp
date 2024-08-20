#include <iostream>
using namespace std;

void fun(int[], int);

int main()
{
    int i, a[] = {1, 2, 3};
    cout << "One: ";
    for (i = 0; i < 3; i++)
    {
        cout << '\t' << a[i];
    }
    cout << endl;

    fun(a, sizeof(a) / sizeof(int));

    cout << "Three: ";
    for (i = 0; i < 3; i++)
    {
        cout << '\t' << a[i];
    }
    cout << endl;
    return 0;
}

// void fun(int x[], int num)
// {
//     int i;
//     for (i = 0; i < num; i++)
//     {
//         x[i]++;
//     }
//     cout << "Two: ";
//     for (i = 0; i < num; i++)
//     {
//         cout << '\t' << x[i];
//     }
//     cout << endl;
//     return;
// }

void fun(int x[], int num)
{
    int i;
    // 遍历数组中的每个元素
    for (i = 0; i < num; i++)
    {
        // 对当前元素进行加1操作，并将指针移动到下一个元素
        (*x)++, x++;
        // 值加一，地址加一
    }

    // 输出字符串"Two: "
    cout << "Two: ";

    // 将指针移回数组的起始位置
    x = x - num;

    // 再次遍历数组中的每个元素
    for (i = 0; i < num; i++)
    {
        // 输出当前元素的值，并将指针移动到下一个元素
        cout << '\t' << *x++;
    }
    cout << endl;

    return;
}

/*
    One:    1       2       3
    Two:    2       3       4
    Three:  2       3       4
*/