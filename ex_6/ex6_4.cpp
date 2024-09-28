#include <iostream>
using namespace std;

class Date
{
public:
	Date(int, int, int);
	~Date();
	void SetDate(int y, int m, int d);
	void IsLeapYear() const;
	void PrintDate() const;

private:
	int year, month, day;
};

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << year << '\t' << month << '\t' << day << endl;
	cout << "Date Init!" << endl;
}

Date::~Date()
{
	cout << year << "\t" << month << '\t' << day << endl;
	cout << "Date Destory!" << endl;
}
void Date::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void Date::IsLeapYear() const
{
	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
	{
		cout << "Yes!It is Leap Year!" << endl;
	}
	else
	{
		cout << "No! It isn't Leap Year!" << endl;
	}
}

void Date::PrintDate() const
{
	cout << year << '\t' << month << '\t' << day << endl;
}

int main()
{
	Date d1(2024, 9, 28); // 2024    9       28   '\n'		Date Init !
	Date d2(2019, 10, 1); // 2019    10      1    '\n'      Date Init !
	d1.SetDate(2020, 2, 2);
	d1.PrintDate();	 // 2020    2       2
	d1.IsLeapYear(); // Yes!It is Leap Year!
	d2.PrintDate();	 // 2019    10      1
	d2.IsLeapYear(); // No! It isn't Leap Year!
}

// 2024    9       28
// Date Init!
// 2019    10      1
// Date Init!
// 2020    2       2
// Yes!It is Leap Year!
// 2019    10      1
// No! It isn't Leap Year!
// 2019    10      1
// Date Destory!
// 2020    2       2
// Date Destory!