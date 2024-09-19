#include <iostream>
using namespace std;

int main()
{
    int i, *p;
    int a[5] = {1, 3, 5, 7, 9};

    if (a == &a[0])
    {

        // 用下标访问数组
        for (i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]= " << a[i] << "  ";
        }
        cout << endl;

        // 用指针作为下标访问数组
        for (p = a, i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]= " << p[i] << "  ";
        }
        cout << endl;

        // 用指针方式访问数组
        for (i = 0; i < 5; i++)
        {
            cout << "a[" << i << "]= " << *(a + i) << "  ";
        }
        cout << endl;

        // 用指针间址方式访问数组
        for (p = a; p < a + 5; p++)
        {
            cout << "a[" << p - a << "]= " << *p << "  ";
        }
    }
}