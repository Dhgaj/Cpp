#include <iostream>
using namespace std;

struct point
{
    double x;
    double y;
};

void exchange(point p1, point p2);

int main()
{
    point p1, p2;

    // 初始化p1的坐标
    p1.x = 10.10;
    p1.y = 20.20;

    // 初始化p2的坐标
    p2.x = 30.30;
    p2.y = 40.40;

    // 打印交换前的p1和p2的坐标
    cout << "main1:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x=" << p2.x << "\tp2.y=" << p2.y << endl;

    // 调用exchange函数交换p1和p2的坐标
    exchange(p1, p2);

    // 打印交换后的p1和p2的坐标
    cout << "main2:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x=" << p2.x << "\tp2.y=" << p2.y << endl;
}

void exchange(point p1, point p2)
{
    // 定义一个临时变量p
    point p;
    // 将p1的值赋给p
    p = p1;
    // 将p2的值赋给p1
    p1 = p2;
    // 这里存在逻辑错误，应该是将p的值赋给p2
    p2 = p;
    // 输出交换后的p1的值
    cout << "change:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    // 输出交换后的p2的值
    cout << "\tp2.x=" << p2.x << "\tp2.y=" << p2.y << endl;
}