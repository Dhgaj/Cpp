#include <iostream>
using namespace std;
int main()
{
    int m, i, k, n = 0;
    // 遍历2到100之间的所有整数
    for (m = 2; m <= 100; m++)
    {
        // 求m的平方根并向下取整
        k = int(sqrt(double(m)));
        i = 2;
        // 当i小于等于m的平方根且m不能被i整除时，循环继续
        while (m % i && i <= k)
        {
            i++;
        }
        // 如果i大于m的平方根，说明m是素数
        if (i > k)
        {
            // 输出素数m
            cout << m << '\t';
            // 计数器n加1
            n += 1;
            // 当n是5的倍数时，输出换行符
            if (n % 5 == 0)
            {
                cout << endl;
            }
        }
    }
}