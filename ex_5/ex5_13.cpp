#include <iostream>
using namespace std;

struct point
{
    double x;
    double y;
};

void exchange(point &p1, point &p2);

int main()
{
    point p1, p2;
    p1.x = 10.10;
    p1.y = 20.20;

    p2.x = 30.30;
    p2.y = 40.40;

    cout << "main1:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x =" << p2.x << "\tp2.y=" << p2.y << endl;
    exchange(p1, p2);

    cout << "main2:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x =" << p2.x << "\tp2.y=" << p2.y << endl;
}

void exchange(point &p1, point &p2)
{
    point p;
    p = p1;
    p1 = p2;
    p2 = p1;
    cout << "change:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x =" << p2.x << "\tp2.y=" << p2.y << endl;
}