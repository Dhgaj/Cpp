#include <iostream>
using namespace std;

void simple()
{
    cout << "It is a simple function.\n";
}
int main()
{
    cout << "Call function : \n";
    simple();
    (&simple)();
    (*&simple)();
    cout << "Address of function :\n";
    cout << simple << endl;
    cout << &simple << endl;
    cout << *&simple << endl;
}
