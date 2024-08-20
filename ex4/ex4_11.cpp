#include <iostream>
using namespace std;

void fun(int &, int &, int &);

int main()
{
    int i, a[3] = {1, 2, 3};
    cout << "One: ";
    for (i = 0; i < 3; i++)
    {
        cout << '\t' << a[i];
    }
    cout << endl;

    fun(a[0], a[1], a[2]);
    
    cout << "Three: ";
    for (i = 0; i < 3; i++)
    {
        cout << '\t' << a[i];
    }
    cout << endl;
    return 0;
}

void fun(int &a, int &b, int &c)
{
    // 将变量a的值加1
    a++;
    // 将变量b的值加1
    b++;
    // 将变量c的值加1
    c++;
    // 输出字符串"Two: "
    cout << "Two: ";
    // 输出变量a、b、c的值，并用制表符分隔
    cout << '\t' << a << '\t' << b << '\t' << c << endl;
    return;
}

/*
    One:    1       2       3
    Two:    2       3       4
    Three:  2       3       4
*/