#include <iostream>
using namespace std;

struct Weather
{
    double temp;
    double wind;

} yesterday;

int main()
{
    Weather today;
    yesterday.temp = 10.3;
    yesterday.wind = 23;
    today = yesterday;
    cout << "Temp: " << today.temp << endl;
    cout << "Wind: " << today.wind << endl;
}