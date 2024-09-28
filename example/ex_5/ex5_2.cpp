#include <iostream>
using namespace std;

void bitDisplay(unsigned value);

int main()
{
    unsigned n1, n2;
    n1 = 214;
    n2 = 5;
    cout << n1 << "\t";
    bitDisplay(n1);
    cout << n2 << "\t";
    bitDisplay(n2);
    cout << n1 << "&" << n2 << "=\t";
    bitDisplay(n1 & n2);
    cout << n1 << "|" << n2 << "=\t";
    bitDisplay(n1 | n2);
    cout << n1 << "^" << n2 << "=\t";
    bitDisplay(n1 ^ n2);
    cout << "~" << n1 << "=\t";
    bitDisplay(~n1);
    return 0;
}

void bitDisplay(unsigned value)
{
    unsigned c;
    unsigned bitMask = 1 << 31;
    cout << value << " = ";
    for (c = 1; c <= 32; c++)
    {
        cout << (value & bitMask ? '1' : '0');
        value <<= 1;
        if (c % 8 == 0)
        {
            cout << " ";
        }
    }
    cout << endl;
}