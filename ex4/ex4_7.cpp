#include <iostream>
using namespace std;

#include <iomanip>

int main()
{
    int a[3][4];
    int i, j;

    // 输入数组元素
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    // 输出数组元素
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}