#include <iostream>
using namespace std;
#include <string>

int main()
{
    cout << "Enter " << "eg.Dec 25,2001" << endl;
    string Date;
    getline(cin, Date, '\n');
    int i = Date.find(" ");
    string Month = Date.substr(0, i);
    int k = Date.find(",");
    string Day = Date.substr(i + 1, k - i - 1);
    string Year = Date.substr(k, Date.size() - 1);
    string NewDate = Day + " " + Month + " " + Year;
    cout << "Original date" << "\t" << Date << endl;
    cout << "Converted date" << "\t" << NewDate << endl;
    return 0;
}