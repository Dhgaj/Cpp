#include <iostream>
using namespace std;

int main()
{
    int a = 11, b = 22, c = 33;
    int *pi[3];
    pi[0] = &a;
    pi[1] = &b;
    pi[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        cout << *pi[i] << '\t';
    }
    return 0;
}