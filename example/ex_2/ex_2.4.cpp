#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    // 初始化变量a、b、c和max
    // cin >> a >> b >> c;
    // 这里将a、b、c的值分别设置为10、20、30
    a = 10;
    b = 20;
    c = 30;

    // 使用三元运算符计算a、b、c中的最大值，并赋值给max
    // 如果a大于b，则比较a和c的大小，取较大者赋值给max
    // 否则，比较b和c的大小，取较大者赋值给max
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);

    // 输出最大值max
    cout << max << endl;

    return 0;
}