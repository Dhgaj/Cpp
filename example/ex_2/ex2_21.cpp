#include <iostream>
using namespace std;

int main()
{
    long int n;
    double x, term, sum;

    cout << "x = ";
    cin >> x;

    // 初始化变量
    n = 1;
    sum = x;
    term = x;

    // 循环计算级数展开式
    do
    {
        // 计算下一项的分母
        n += 2;
        // 计算下一项的值
        term *= (-x * x) / (n * (n - 1));
        // 累加下一项的值到总和中
        sum += term;
    } while (fabs(term) >= 1e-8);

    // 输出计算结果
    cout << "sin(" << x << ") = " << sum << endl;
    return 0;
}