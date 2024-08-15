#include <iostream>
using namespace std;

int &count(int);
int a, b;
int main()
{
    int x;
    cout << "Please input number(0 is end): ";
    cin >> x;
    while (x)
    {
        count(x)++;
        cin >> x;
    }
    cout << "the number of right : " << a << endl;
    cout << "the number of negative : " << b << endl;
}
int &count(int n)
{
    if (n > 0)
        return a;
    return b;
}