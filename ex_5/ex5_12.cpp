#include <iostream>
using namespace std;

struct point
{
    double x;
    double y;
};

void exchange(point *pt1, point *pt2);

int main()
{
    point p1, p2;
    p1.x = 10.10;
    p1.y = 20.20;

    p2.x = 30.30;
    p2.y = 40.40;

    cout << "main1:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x =" << p2.x << "\tp2.y=" << p2.y << endl;

    exchange(&p1, &p2);

    cout << "main2:\n\tp1.x=" << p1.x << "\tp1.y=" << p1.y << endl;
    cout << "\tp2.x =" << p2.x << "\tp2.y=" << p2.y << endl;
}

void exchange(point *pt1, point *pt2)
{
    // point p;
    // p = *pt1;
    // *pt1 = *pt2;
    // *pt2 = p;
    point *p;
    p = pt1;
    pt1 = pt2;
    pt2 = p;
    cout << "change:\n\tp1.x=" << pt1->x << "\tp1.y=" << pt1->y << endl;
    cout << "\tp2.x =" << pt2->x << "\tp2.y=" << pt2->y << endl;
}
