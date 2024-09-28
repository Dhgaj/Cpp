#include <iostream>
using namespace std;

struct person
{
    char name[10];
    unsigned int id;
    double salary;
};

void Input(person[], const int);
void Sort(person *[], const int);
void Output(person *[], const int);

int main()
{
    person allone[100];
    person *index[100];
    int total;
    for (int i = 0; i < 100; i++)
    {
        index[i] = allone + i;
    }
    cout << "请输入职工人数:" << endl;
    cin >> total;
    Input(allone, total);
    cout << "以工资进行排序:" << endl;
    Sort(index, total);
    cout << "排序后的结果:" << endl;
    Output(index, total);
    return 0;
}

void Input(person all[], const int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << i << ".Name:";
        cin >> all[i].name;
        cout << "ID:";
        cin >> all[i].id;
        cout << "Salary:";
        cin >> all[i].salary;
    }
}

void Sort(person *p[], const int n)
{
    int i, j;
    person *temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i]->salary < p[j]->salary)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void Output(person *p[], const int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << p[i]->name << " " << p[i]->id << " " << p[i]->salary << endl;
    }
}