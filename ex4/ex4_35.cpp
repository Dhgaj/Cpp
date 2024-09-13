#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 定义字符串 alphabet，包含26个英文字母并用逗号分隔
    string alphabet = "A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z";

    // 在字符串 alphabet 中查找逗号的位置
    int x = alphabet.find(",");

    // 循环直到找不到逗号为止
    while (x < string::npos)
    {
        // 将找到的逗号替换为分号
        alphabet.replace(x, 1, ";");

        // 继续在字符串 alphabet 中查找下一个逗号的位置
        x = alphabet.find(",", x + 1);
    }

    // 输出替换后的字符串 alphabet
    cout << alphabet;
    return 0;
}