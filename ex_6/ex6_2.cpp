#include <iostream>
using namespace std;

class Tclass
{
public:
    int x;
    int y;
    void print()
    {
        // 输出 x 和 y 的值
        cout << "x= " << x << " , " << "y= " << y << endl;
    };
};

int add(Tclass *ptf)
{
    // 返回对象的x和y成员变量的和
    return (ptf->x + ptf->y);
}

int main()
{
    // 创建一个Tclass类型的对象test，并定义一个指向Tclass类型的指针pt，将pt指向test
    Tclass test, *pt = &test;

    // 通过指针pt修改test对象的x成员变量的值为100
    pt->x = 100;

    // 通过指针pt修改test对象的y成员变量的值为200
    pt->y = 200;

    // 调用test对象的print成员函数
    pt->print();

    // 输出add函数的返回值，并加上字符串"x+y= "
    cout << "x+y= " << add(&test) << endl;

    // 修改test对象的x成员变量的值为150
    test.x = 150;

    // 修改test对象的y成员变量的值为450
    test.y = 450;

    // 再次调用test对象的print成员函数
    test.print();

    // 再次输出add函数的返回值，并加上字符串"x+y= "
    cout << "x+y= " << add(&test) << endl;
}