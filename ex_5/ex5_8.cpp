#include <iostream>
using namespace std;

struct Weather
{
    double temp;
    double wind;
};

int main()
{
    Weather today;
    today.temp = 30.5;
    today.wind = 10.5;

    cout << "Temp = " << today.temp << endl;
    cout << "Wind = " << today.wind << endl;
    return 0;
}
