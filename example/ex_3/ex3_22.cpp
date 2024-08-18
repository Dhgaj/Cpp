#include <iostream>
using namespace std;

void Move(int n, char a, char b, char c);

int main()
{
    int m;
    // 提示用户输入盘符
    cout << "Please input the disk: ";
    // 读取用户输入的盘符
    cin >> m;
    // 调用Move函数，传入盘符m，起始盘符'A'，中转盘符'B'，目标盘符'C'
    Move(m, 'A', 'B', 'C');
}

void Move(int n, char a, char b, char c)
{
    if (n == 1)
    {
        // 当只有一个盘子时，直接将盘子从a柱子移动到c柱子
        cout << a << "-->" << c << endl;
    }
    else
    {
        // 先将n-1个盘子从a柱子移动到b柱子，以c柱子作为辅助柱子
        Move(n - 1, a, c, b);
        // 将剩下的一个盘子从a柱子移动到c柱子
        cout << a << "-->" << c << endl;
        // 最后将n-1个盘子从b柱子移动到c柱子，以a柱子作为辅助柱子
        Move(n - 1, b, a, c);
    }
}