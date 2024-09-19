#include <iostream>
using namespace std;

int main()
{
    int i;
    int a[5] = {0, 2, 4, 6, 8};
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl;

    static int b[5] = {1, 3, 5};
    for (i = 0; i < 5; i++)
    {
        cout << b[i] << '\t';
    }
    cout << endl;

    int c[] = {1, 3, 5, 7, 9, 11};
    for (i = 0; i < sizeof(c) / sizeof(int); i++)
    {
        cout << c[i] << '\t';
    }
    cout << endl;
    return 0;
}