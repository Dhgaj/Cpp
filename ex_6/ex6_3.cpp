#include <iostream>
using namespace std;

class Date
{
public:
    Date();                            // 构造函数
    ~Date();                           // 析构函数
    void SetDate(int y, int m, int d); // 设置日期
    int IsLeapYear() const;            // 判断是否为闰年
    void PrintDate() const;            // 打印日期

private:
    int year, month, day; // 年、月、日
};

Date::Date()
{
    cout << "Init!" << endl; // 构造函数输出初始化信息
}

Date::~Date()
{
    cout << "Destroy!" << endl; // 析构函数输出销毁信息
}

void Date::SetDate(int y, int m, int d)
{
    year = y;  // 设置年
    month = m; // 设置月
    day = d;   // 设置日
}

int Date::IsLeapYear() const
{
    // 判断是否为闰年
    return (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0));
}

void Date::PrintDate() const
{
    // 打印年、月、日
    cout << year << "\t" << month << "\t" << day << endl;
}

int main()
{
    Date d; // 创建Date对象

    d.SetDate(2024, 9, 28); // 设置日期为2024年9月28日
    d.PrintDate();          // 打印日期

    if (d.IsLeapYear())
    {
        cout << "Yes! Is Leap Year!" << endl; // 如果是闰年，输出提示信息
    }
    else
    {
        cout << "Sorry! Isn't Leap Year!" << endl; // 如果不是闰年，输出提示信息
    }
    return 0;
}

// Output:

// Init !
// 2024 9 28
// Yes !Is Leap Year !
// Destroy !