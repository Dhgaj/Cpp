#include <iostream>
using namespace std;

class Tclass
{
public:
    int x, y;
    void print()
    {
        cout << "x= " << x << " , " << "y= " << y;
    };
};

int main()
{
    Tclass test;
    test.x = 100;
    test.y = 200;
    test.print();
}