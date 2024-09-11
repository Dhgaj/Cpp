#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> a(10, 0);
    vector<int> b;
    int i;
    for (i = 0; i < a.size(); i++)
    {
        a[i] = i + 1;
    }
    for (i = 0; i < a.size(); i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl;
    b = a;
    for (i = 0; i < b.size(); i++)
    {
        cout << b[i] << '\t';
    }
    cout << endl;
    cout << "a==b" << '\t' << (a == b) << endl;
    cout << "a>b  " << '\t' << (a > b) << endl;
    cout << "a!=b  " << '\t' << (a != b) << endl;
}

// 1 2 3 4 5 6 7 8 9 10
// 1 2 3 4 5 6 7 8 9 10
// a == b  1
// a > b   0
// a != b  0
