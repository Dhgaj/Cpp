#include <iostream>
using namespace std;

void bitDisplay(unsigned value);

int main()
{
    unsigned x;
    // 输出提示信息
    cout << "Enter ";
    // 从标准输入读取一个无符号整数
    cin >> x;
    // 调用bitDisplay函数，显示x的二进制表示
    bitDisplay(x);
}

// 注意：此处只是根据你给出的代码片段进行注释，实际的bitDisplay函数并没有在代码片段中定义
// 若要正确执行这段代码，还需要实现bitDisplay函数的定义
void bitDisplay(unsigned value)
{
    // 定义一个无符号整型变量c，用于循环计数
    unsigned c;
    // 定义一个无符号整型变量bitMask，初始值为2的31次方，用于构造位掩码 10000000 00000000 00000000 00000000
    unsigned bitMask = 1 << 31;
    // 输出原始值
    cout << value << " = ";
    // 循环32次，依次输出value的二进制表示
    for (c = 1; c <= 32; c++)
    {
        // 判断value的第c位是否为1，并输出对应的字符'1'或'0'
        cout << (value & bitMask ? '1' : '0');
        // 将value左移1位，准备输出下一位
        // value & bitMask 进行按位与运算时，只能表示出value最高位的状态
        value <<= 1;
        // 如果已经输出了8位，输出一个空格进行分隔
        if (c % 8 == 0)
        {
            cout << " ";
        }
    }
    // 换行
    cout << endl;
}