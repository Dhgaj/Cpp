#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    const char *s = new char[128];
    fgets(const_cast<char *>(s), 10, stdin);
    puts(s);
    delete[] s;
    s = NULL;
}