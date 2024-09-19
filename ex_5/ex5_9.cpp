#include <iostream>
#include <cstring>
using namespace std;

struct Person
{
    char name[20];
    unsigned long id;
    double salary;
};

int main()
{
    Person pr1;
    Person *pp;

    pp = &pr1;
    strcpy(pp->name, "John");
    pp->id = 12345;
    pp->salary = 50000.00;
    cout << pp->name << " " << pp->id << " " << pp->salary;
}