#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Please enter three numbers:";
    cin >> a >> b >> c;

    // 使用条件运算符比较 a、b、c 的值
    double min = (a < b ? (a < c ? a : c) : (b < c ? b : c));

    cout << "The minimum value of the three numbers is: " << min << endl;

    return 0;
}
