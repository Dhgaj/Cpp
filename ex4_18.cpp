// 动态分配和释放储存空间
#include <iostream>
using namespace std;

int main()
{
    int *p = NULL;
    p = new int;
    if (p == NULL)
    {
        cout << "allocate failure" << endl;
        return 0;
    }
    *p = 20;
    cout << *p << endl;
    delete p;
    p = NULL;
    cout << "hello" << endl;
    return 0;
}