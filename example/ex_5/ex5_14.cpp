#include <iostream>
using namespace std;

struct person
{
    char name[10];
    unsigned int id;
    double salary;
};

void Input(person[], const int);
void Sort(person[], const int);
void Output(const person[], const int);

int main()
{
    person allone[100];
    int total;
    cout << "Enter the number of persons: ";
    cin >> total;
    cout << "Enter the name, id, and salary of each person:\n";
    Input(allone, total);
    cout << "The original list:\n";
    Sort(allone, total);
    cout << "The sorted list:\n";
    Output(allone, total);
    return 0;
}

void Input(person all[], const int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << i << ".Name  ";
        cin >> all[i].name;
        cout << "ID   ";
        cin >> all[i].id;
        cout << "Salary   ";
        cin >> all[i].salary;
    }
}

void Sort(person all[], const int n)
{
    int i, j;
    person temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (all[j].salary > all[j + 1].salary)
            {
                temp = all[j];
                all[j] = all[j + 1];
                all[j + 1] = temp;
            }
        }
    }
}

void Output(const person all[], const int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << all[i].name << "\t" << all[i].id << "\t" << all[i].salary << endl;
    }
}
