#include <iostream>
using namespace std;

// 定义Date类
class Date
{
public:
    Date(int, int, int);               // 构造函数声明
    ~Date();                           // 析构函数声明
    void SetDate(int y, int m, int d); // 设置日期函数声明
    void IsLeapYear() const;           // 判断是否为闰年函数声明
    void PrintDate() const;            // 打印日期函数声明

private:
    int year, month, day; // 年、月、日成员变量
};

// 构造函数定义
Date::Date(int y, int m, int d)
{
    year = y;                                             // 初始化年
    month = m;                                            // 初始化月
    day = d;                                              // 初始化日
    cout << year << '\t' << month << '\t' << day << endl; // 打印初始化的日期
    cout << "Date Init!" << endl;                         // 打印初始化信息
}

// 析构函数定义
Date::~Date()
{
    cout << year << "\t" << month << '\t' << day << endl; // 打印销毁前的日期
    cout << "Date Destory!" << endl;                      // 打印销毁信息
}

// 设置日期函数定义
void Date::SetDate(int y, int m, int d)
{
    year = y;  // 设置年
    month = m; // 设置月
    day = d;   // 设置日
}

// 判断是否为闰年函数定义
void Date::IsLeapYear() const
{
    if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0)) // 判断闰年的条件
    {
        cout << "Yes! It is Leap Year!" << endl; // 是闰年
    }
    else
    {
        cout << "No! It isn't Leap Year!" << endl; // 不是闰年
    }
}

// 打印日期函数定义
void Date::PrintDate() const
{
    cout << year << '\t' << month << '\t' << day << endl; // 打印日期
}

// 主函数
int main()
{
    Date *pd;                   // 定义Date类指针
    pd = new Date(1996, 10, 1); // 动态分配Date对象并初始化
    pd->PrintDate();            // 打印日期
    pd->IsLeapYear();           // 判断是否为闰年
    delete pd;                  // 释放动态分配的内存 析构函数会打印销毁信息
    return 0;                   // 返回0，表示程序正常结束
}