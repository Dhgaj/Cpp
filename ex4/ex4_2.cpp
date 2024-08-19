#include <iostream>
using namespace std;

int main()
{
    int i, total = 0;
    int intary[10];
    for (i = 0; i < 10; i++)
    {
        intary[i] = i;
        cout << intary[i] << '\t';
    }
    cout << endl;
    for (i = 0; i < 10; i++)
    {
        total += intary[i];
    }
    cout << "total = " << total << endl;
    return 0;
}