#include <iostream>
using namespace std;

int main()
{
    char s1[100];
    cout << "Please input string1: ";
    cin.getline(s1, 100);
    cout << "Output string1: " << s1 << endl;

    char *s2 = new char[100];
    cout << "Please input string2: ";
    cin.getline(s2, 100);
    cout << "Output string2: " << s2 << endl;

    delete[] s2;
    s2 = NULL;

    return 0;
}

// Please input string1 : 1234qwer
// Output string1 : 1234qwer
// Please input string2 : qwerasdf
// Output string2 : qwerasdf

// 问题： 为什么用cin<<s1 / s2 会发生问题 无法输入 s2 或 由于 cin >> s2 语句引起的。cin 不能直接读取到一个 char* 指针中