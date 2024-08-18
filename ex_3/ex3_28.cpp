#include <iostream>
using namespace std;

inline int isnumber(char);

int main()
{
    char c;
    int n;
    n = 0;
    cout << "Enter a line of numbers: " << endl;
    while ((c = getchar()) != '\n')
    {
        if (isnumber(c))
        {
            n++;
        }
    }
    cout << "n = " << n << endl;
}

int isnumber(char ch)
{
    return (ch >= '0' && ch <= '9') ? 1 : 0;
}